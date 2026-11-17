# CMake generated Testfile for 
# Source directory: /media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/bmv2
# Build directory: /media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/bmv2
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(smith-compile-bmv2-v1model "/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/scripts/compilation-test.sh" "100" "/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/p4smith" "/media/t/scratch/p4/p4c/p4c-bm2-ss" "/media/t/scratch/p4/p4c" "v1model" "bmv2")
set_tests_properties(smith-compile-bmv2-v1model PROPERTIES  WORKING_DIRECTORY "/media/t/scratch/p4/p4c" _BACKTRACE_TRIPLES "/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/bmv2/test/P4Tests.cmake;9;add_test;/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/bmv2/test/P4Tests.cmake;0;;/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/bmv2/CMakeLists.txt;4;include;/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/bmv2/CMakeLists.txt;0;")
add_test(smith-compile-bmv2-psa "/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/scripts/compilation-test.sh" "100" "/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/p4smith" "/media/t/scratch/p4/p4c/p4c-bm2-psa" "/media/t/scratch/p4/p4c" "psa" "bmv2")
set_tests_properties(smith-compile-bmv2-psa PROPERTIES  WORKING_DIRECTORY "/media/t/scratch/p4/p4c" _BACKTRACE_TRIPLES "/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/bmv2/test/P4Tests.cmake;13;add_test;/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/bmv2/test/P4Tests.cmake;0;;/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/bmv2/CMakeLists.txt;4;include;/media/t/scratch/p4/p4c/backends/p4tools/modules/smith/targets/bmv2/CMakeLists.txt;0;")
