# My settings for a "fast" p4c build, your milage may vary 
cd build
cmake  .. \
    -DENABLE_TEST_TOOLS=OFF                \
    -DENABLE_EBPF=OFF                      \
    -DENABLE_UBPF=OFF                      \
    -DENABLE_DPDK=OFF                      \
    -DENABLE_P4TC=OFF                      \
    -DENABLE_P4FMT=OFF                     \
    -DENABLE_P4C_GRAPHS=OFF                \
    -DENABLE_BMV2=ON                       \
    -DENABLE_GTESTS=OFF                    \
    -DENABLE_MULTITHREAD=ON                \
    -DENABLE_P4TEST=OFF                    \
    -DCMAKE_CXX_COMPILER=/usr/bin/clang++  \
    -DCMAKE_C_COMPILER=/usr/bin/clang      \
    -DCMAKE_UNITY_BUILD=OFF                \
    -G Ninja                               \
    -DCMAKE_LINKER=/usr/bin/ld.gold        
ninja