#!/bin/bash

. "$(dirname "$0")/deps_common.sh"

# no rpm for this?
if [ ! -e double-conversion ]; then
echo "Fetching double-conversion from git (yum failed)"
    git clone https://github.com/floitsch/double-conversion.git double-conversion
    cd double-conversion
    cmake . -DBUILD_SHARED_LIBS=ON -DCMAKE_INSTALL_PREFIX=${TOOLCHAIN_INSTALL_PATH}
    make -j$(nproc)
    sudo make install
    cd ..
fi

install_folly centos  # needs git
install_mstch centos  # needs git, cmake
install_wangle centos
