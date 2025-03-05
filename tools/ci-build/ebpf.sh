#!/bin/bash

# Script for building P4C for continuous integration builds.

set -e  # Exit on error.
set -x  # Make command execution verbose

# Default to using 2 make jobs, which is a good default for CI. If you're
# building locally or you know there are more cores available, you may want to
# override this.
: "${MAKEFLAGS:=-j2}"
# Select the type of image we're building. Use `build` for a normal build, which
# is optimized for image size. Use `test` if this image will be used for
# testing; in this case, the source code and build-only dependencies will not be
# removed from the image.
: "${IMAGE_TYPE:=build}"
# Whether to do a unity build.
: "${CMAKE_UNITY_BUILD:=ON}"
# Whether to enable translation validation
: "${VALIDATION:=OFF}"
# This creates a release build that includes link time optimization and links
# all libraries except for glibc statically.
: "${STATIC_BUILD_WITH_DYNAMIC_GLIBC:=OFF}"
# This creates a release build that includes link time optimization and links
# all libraries except for glibc and libstdc++ statically.
: "${STATIC_BUILD_WITH_DYNAMIC_STDLIB:=OFF}"
# No questions asked during package installation.
: "${DEBIAN_FRONTEND:=noninteractive}"
# Whether to install dependencies required to run PTF-ebpf tests
: "${INSTALL_PTF_EBPF_DEPENDENCIES:=OFF}"
# Whether to build and run GTest unit tests.
: "${ENABLE_GTESTS:=ON}"
# Whether to treat warnings as errors.
: "${ENABLE_WERROR:=ON}"
# Compile with Clang compiler
: "${COMPILE_WITH_CLANG:=OFF}"
# Compile with sanitizers (UBSan, ASan)
: "${ENABLE_SANITIZERS:=OFF}"
# Only execute the steps necessary to successfully run CMake.
: "${CMAKE_ONLY:=OFF}"
# The build generator to use. Defaults to Make.
: "${BUILD_GENERATOR:="Unix Makefiles"}"
# Build with -ftrivial-auto-var-init=pattern to catch more bugs caused by
# uninitialized variables.
: "${BUILD_AUTO_VAR_INIT_PATTERN:=OFF}"
# BMv2 is enable by default.
: "${ENABLE_BMV2:=ON}"
# eBPF is enabled by default.
: "${ENABLE_EBPF:=ON}"
# P4TC is enabled by default.
: "${ENABLE_P4TC:=ON}"
# This is the list of back ends that can be enabled.
# Back ends can be enabled from the command line with "ENABLE_[backend]=TRUE/FALSE"
ENABLE_BACKENDS=("TOFINO" "BMV2" "EBPF" "UBPF" "DPDK"
                 "P4TC" "P4FMT" "P4TEST" "P4C_GRAPHS"
                 "TEST_TOOLS"
)
function build_cmake_enabled_backend_string() {
  CMAKE_ENABLE_BACKENDS=""
  for backend in "${ENABLE_BACKENDS[@]}";
  do
    enable_var=ENABLE_${backend}
    if [ -n "${!enable_var}" ]; then
      echo "${enable_var}=${!enable_var} is set."
      CMAKE_ENABLE_BACKENDS+="-D${enable_var}=${!enable_var} "
    fi
  done
}


. /etc/lsb-release

# In Docker builds, sudo is not available. So make it a noop.
if [ "$IN_DOCKER" == "TRUE" ]; then
  echo "Executing within docker container."
  function sudo() { command "$@"; }
fi


  # TODO: Remove this check once 18.04 is deprecated.
if [[ "${DISTRIB_RELEASE}" == "18.04" ]] ; then
  ccache --set-config cache_dir=.ccache
  # For Ubuntu 18.04 install the pypi-supplied version of cmake instead.
  sudo pip3 install cmake==3.16.3
fi
ccache --set-config max_size=1G

# ! ------  BEGIN EBPF -----------------------------------------------
function build_ebpf() {
  P4C_EBPF_DEPS="libpcap-dev \
                 libelf-dev \
                 zlib1g-dev \
                 llvm \
                 clang \
                 iproute2 \
                 iptables \
                 net-tools"

  sudo apt-get install -y --no-install-recommends ${P4C_EBPF_DEPS}
}

if [ "${BUILD_GENERATOR,,}" == "ninja" ] && [ ! $(command -v ninja) ]
then
    echo "Selected ninja as build generator, but ninja could not be found."
    exit 1
fi

function install_ptf_ebpf_test_deps() (
    P4C_PTF_PACKAGES="gcc-multilib \
                             python3-six \
                             libgmp-dev \
                             libjansson-dev"
    sudo apt-get install -y --no-install-recommends ${P4C_PTF_PACKAGES}

    git clone --depth 1 --recursive --branch v0.3.1 https://github.com/NIKSS-vSwitch/nikss /tmp/nikss
    pushd /tmp/nikss
    ./build_libbpf.sh
    mkdir build
    cd build
    cmake -DCMAKE_BUILD_TYPE=Release -G "${BUILD_GENERATOR}" ..
    cmake --build . -- -j $(nproc)
    sudo cmake --install .

    # install bpftool
    git clone --recurse-submodules --branch v7.3.0 https://github.com/libbpf/bpftool.git /tmp/bpftool
    cd /tmp/bpftool/src
    make "-j$(nproc)"
    sudo make install
    popd
)

if [[ "${ENABLE_EBPF}" == "ON" ]] ; then
  build_ebpf
  if [[ "${INSTALL_PTF_EBPF_DEPENDENCIES}" == "ON" ]] ; then
    install_ptf_ebpf_test_deps
  fi
fi
# ! ------  END EBPF -----------------------------------------------
