# CMake generated Testfile for 
# Source directory: /media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/nic
# Build directory: /media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/nic
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(smith-compile-dpdk "/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/scripts/compilation-test.sh" "100" "/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/p4smith" "/media/t/scratch/p4/p4c/p4c-dpdk --arch pna --target dpdk" "/media/t/scratch/p4/p4c" "pna" "dpdk")
set_tests_properties(smith-compile-dpdk PROPERTIES  WORKING_DIRECTORY "/media/t/scratch/p4/p4c" _BACKTRACE_TRIPLES "/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/nic/test/P4Tests.cmake;12;add_test;/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/nic/test/P4Tests.cmake;0;;/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/nic/CMakeLists.txt;4;include;/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/nic/CMakeLists.txt;0;")
