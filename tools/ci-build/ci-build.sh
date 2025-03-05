#!/bin/bash

# Script for building P4C for continuous integration builds.

set -e  # Exit on error.
set -x  # Make command execution verbose

THIS_DIR=$( cd -- "$( dirname -- "${0}" )" &> /dev/null && pwd )
P4C_DIR=$(readlink -f ${THIS_DIR}/../..)

# Default to using 2 make jobs, which is a good default for CI. If you're
# building locally or you know there are more cores available, you may want to
# override this.
: "${MAKEFLAGS:=-j4}"
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



# ! ------  BEGIN DPDK -----------------------------------------------
function build_dpdk() {
  # Replace existing Protobuf with one that works.
  # TODO: Debug protobuf mismatch.
  sudo -E pip3 uninstall -y protobuf
  sudo pip3 install protobuf==3.20.3 netaddr==0.9.0
}

if [[ "${ENABLE_DPDK}" == "ON" ]]; then
  build_dpdk
fi
# ! ------  END DPDK -----------------------------------------------

# ! ------  BEGIN TOFINO --------------------------------------------

function build_tofino() {
    P4C_TOFINO_PACKAGES="rapidjson-dev"
    sudo apt-get install -y --no-install-recommends ${P4C_TOFINO_PACKAGES}
    sudo pip3 install jsl==0.2.4 pyinstaller==6.11.0
}

if [[ "${ENABLE_TOFINO}" == "ON" ]]; then
  echo "Installing Tofino dependencies"
  build_tofino
fi
# ! ------  END TOFINO ----------------------------------------------

# ! ------  BEGIN VALIDATION -----------------------------------------------
function build_gauntlet() {
  # Symlink the toz3 extension for the p4 compiler.
  mkdir -p ${P4C_DIR}/extensions
  git clone -b stable https://github.com/p4gauntlet/toz3 extensions/toz3
  # Disable failures on crashes
  CMAKE_FLAGS+="-DVALIDATION_IGNORE_CRASHES=ON "
}

# These steps are necessary to validate the correct compilation of the P4C test
# suite programs. See also https://github.com/p4gauntlet/gauntlet.
if [ "$VALIDATION" == "ON" ]; then
  build_gauntlet
fi
# ! ------  END VALIDATION -----------------------------------------------

# Build with Clang instead of GCC.
if [ "$COMPILE_WITH_CLANG" == "ON" ]; then
  export CC=clang
  export CXX=clang++
fi

# Strong optimization.
export CXXFLAGS="${CXXFLAGS} -O3"
# Toggle unity compilation.
CMAKE_FLAGS+="-DCMAKE_UNITY_BUILD=${CMAKE_UNITY_BUILD} "
# Toggle static builds.
CMAKE_FLAGS+="-DSTATIC_BUILD_WITH_DYNAMIC_GLIBC=${STATIC_BUILD_WITH_DYNAMIC_GLIBC} "
CMAKE_FLAGS+="-DSTATIC_BUILD_WITH_DYNAMIC_STDLIB=${STATIC_BUILD_WITH_DYNAMIC_STDLIB} "
# Enable GTest.
CMAKE_FLAGS+="-DENABLE_GTESTS=${ENABLE_GTESTS} "
# Release should be default, but we want to make sure.
CMAKE_FLAGS+="-DCMAKE_BUILD_TYPE=Release "
# Treat warnings as errors.
CMAKE_FLAGS+="-DENABLE_WERROR=${ENABLE_WERROR} "
# Enable sanitizers.
CMAKE_FLAGS+="-DENABLE_SANITIZERS=${ENABLE_SANITIZERS} "
# Enable auto var initialization with pattern.
CMAKE_FLAGS+="-DBUILD_AUTO_VAR_INIT_PATTERN=${BUILD_AUTO_VAR_INIT_PATTERN} "
# Assemble the enabled back ends as a single CMake variable.
build_cmake_enabled_backend_string
CMAKE_FLAGS+="${CMAKE_ENABLE_BACKENDS} "

if [ "$ENABLE_SANITIZERS" == "ON" ]; then
  CMAKE_FLAGS+="-DENABLE_GC=OFF"
  echo "Warning: building with ASAN and UBSAN sanitizers, GC must be disabled."
fi
if [ "${BUILD_GENERATOR,,}" == "ninja" ] && [ ! $(command -v ninja) ]
then
    echo "Selected ninja as build generator, but ninja could not be found."
    exit 1
fi
# Run CMake in the build folder.
if [ -e build ]; then /bin/rm -rf build; fi
mkdir -p ${P4C_DIR}/build
cd ${P4C_DIR}/build
cmake ${CMAKE_FLAGS} -G "${BUILD_GENERATOR}" ..

# If CMAKE_ONLY is active, only run CMake. Do not build.
if [ "$CMAKE_ONLY" == "OFF" ]; then
  cmake --build . -- -j $(nproc)
  sudo cmake --install .
  # Print ccache statistics after building
  ccache -p -s
fi

if [[ "${IMAGE_TYPE}" == "build" ]] ; then
  cd ~
  sudo apt-get purge -y ${P4C_DEPS} git
  sudo apt-get autoremove --purge -y
  rm -rf ${P4C_DIR} /var/cache/apt/* /var/lib/apt/lists/*
  echo 'Build image ready'

elif [[ "${IMAGE_TYPE}" == "test" ]] ; then
  echo 'Test image ready'

fi
