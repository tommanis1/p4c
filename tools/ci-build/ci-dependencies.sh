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
# : "${BUILD_GENERATOR:="Unix Makefiles"}"
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


# ! ------  BEGIN CORE -----------------------------------------------
P4C_DEPS="bison \
          build-essential \
          ccache \
          flex \
          ninja-build \
          g++ \
          git \
          lld \
          libboost-dev \
          libboost-graph-dev \
          libboost-iostreams-dev \
          libfl-dev \
          pkg-config \
          python3 \
          python3-pip \
          python3-setuptools \
          tcpdump"

# TODO: Remove this check once 18.04 is deprecated.
if [[ "${DISTRIB_RELEASE}" != "18.04" ]] ; then
  P4C_DEPS+=" cmake"
fi

sudo apt-get update
sudo apt-get install -y --no-install-recommends ${P4C_DEPS}
sudo pip3 install --upgrade pip
sudo pip3 install -r ${P4C_DIR}/requirements.txt


# ! ------  END CORE -----------------------------------------------
