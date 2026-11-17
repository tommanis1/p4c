# Handle the Z3 installation with this macro. Users have the option to supply their own Z3.
include(${P4C_SOURCE_DIR}/cmake/Z3.cmake)
obtain_z3()

set(Z3EXTRACT_SRCS
    main.cpp
)

# z3extract
add_executable(z3extract ${Z3EXTRACT_SRCS})
target_link_libraries(z3extract ${P4C_LIBRARIES} ${P4C_LIB_DEPS} p4tools-common ${Z3_LIB})
target_include_directories(z3extract SYSTEM BEFORE PUBLIC ${Z3_INCLUDE_DIR})
add_dependencies(z3extract frontend p4tools-common)

# hack to get around the fact that the test scripts expect the backend
# binary to be in the top level directory. This should go away when we
# remove automake and fix the scripts.
add_custom_target(linkz3extract
  COMMAND ${CMAKE_COMMAND} -E create_symlink ${CMAKE_CURRENT_BINARY_DIR}/z3extract ${P4C_BINARY_DIR}/z3extract
  )

add_dependencies(p4c_driver linkz3extract)

install (TARGETS z3extract
  RUNTIME DESTINATION ${P4C_RUNTIME_OUTPUT_DIRECTORY})