#!/bin/bash
# Helpers used by deps_*.sh, meant to be sourced.

set -ex

BUILD_DIR="$(readlink -f "$(dirname "$0")")"
mkdir -p "$BUILD_DIR/deps"
cd "$BUILD_DIR/deps"

install_mstch() {
  pushd .
  git clone https://github.com/no1msd/mstch
  cd mstch
  cmake . -DCMAKE_INSTALL_PREFIX=${TOOLCHAIN_INSTALL_PATH}
  make -j$(nproc)
  sudo make install
  popd
}

install_folly() {
  pushd .
  git clone https://github.com/facebook/folly
  cd folly/folly
  FOLLY_VERSION="$(cat "$BUILD_DIR"/FOLLY_VERSION)"  # on own line for set -e
  git checkout "$FOLLY_VERSION"
  # TODO: write folly dependency scripts for all supported platforms,
  # instead of having the fbthrift scripts pre-install its dependencies.
  if [[ -x "./build/deps_$1.sh" ]] ; then
    "./build/deps_$1.sh"
  fi
  autoreconf -if
  ./configure --enable-follytestmain --with-boost-libdir=${TOOLCHAIN_INSTALL_PATH}/lib --prefix=${TOOLCHAIN_INSTALL_PATH}
  make -j$(nproc)
  sudo make install
  sudo ldconfig
  popd
}

install_wangle() {
  pushd .
  git clone https://github.com/facebook/wangle
  cd wangle/wangle
  WANGLE_VERSION="$(cat "$BUILD_DIR"/WANGLE_VERSION)"
  git checkout "$WANGLE_VERSION"
  cmake . -DCMAKE_INSTALL_PREFIX=${TOOLCHAIN_INSTALL_PATH}
  make -j$(nproc)
  sudo make install
  popd
}
