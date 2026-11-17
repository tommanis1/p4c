# backends/desugar/CMakeLists.txt

set(DESUGAR_SRCS
    main.cpp
)

# Create the desugar executable
add_executable(desugar ${DESUGAR_SRCS})

# Link only necessary libraries
target_link_libraries(desugar 
    ${P4C_LIBRARIES} 
    ${P4C_LIB_DEPS}
)

# Add dependencies
add_dependencies(desugar genIR frontend)

# Create symlink in build directory for compatibility
add_custom_target(linkdesugar
    COMMAND ${CMAKE_COMMAND} -E create_symlink 
        ${CMAKE_CURRENT_BINARY_DIR}/desugar 
        ${P4C_BINARY_DIR}/p4c-desugar
)

add_dependencies(p4c_driver linkdesugar)

# Installation
install(TARGETS desugar
    RUNTIME DESTINATION ${P4C_RUNTIME_OUTPUT_DIRECTORY})