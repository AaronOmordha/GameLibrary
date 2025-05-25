cmake_minimum_required(VERSION 3.10)
project(PlaylistManager CXX)

# Set the compiler options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE ON)

# Define source files
set(SOURCES
    Developer.cpp
    Game.cpp
    Library.cpp
    LibraryItem.cpp
    main.cpp
)

# Create executable
add_executable(PlaylistManager ${SOURCES})
target_compile_options(PlaylistManager PRIVATE --coverage)
target_link_libraries(PlaylistManager PRIVATE --coverage)

# Enable testing
enable_testing()
add_test(NAME output_test COMMAND PlaylistManager)
set_tests_properties(output_test PROPERTIES PASS_REGULAR_EXPRESSION "YourExpectedOutput")

# GCOV target for coverage
add_custom_target(gcov
    COMMAND mkdir -p coverage
    COMMAND ${CMAKE_MAKE_PROGRAM} test
    COMMAND gcov -b ${CMAKE_SOURCE_DIR}/*.cpp -o ${CMAKE_BINARY_DIR}/CMakeFiles/PlaylistManager.dir
        | grep -A 5 "Playlist.cpp" > coverage/CoverageSummary.tmp
    COMMAND cat coverage/CoverageSummary.tmp
    COMMAND echo "-- Coverage summary written to coverage/"
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

add_dependencies(gcov PlaylistManager)

# GCOV clean
add_custom_target(scrub
    COMMAND ${CMAKE_MAKE_PROGRAM} clean
    COMMAND rm -f ${CMAKE_BINARY_DIR}/CMakeFiles/PlaylistManager.dir/*.gcno
    COMMAND rm -f ${CMAKE_BINARY_DIR}/CMakeFiles/PlaylistManager.dir/*.gcda
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

# Clean coverage files when cleaning project
set_property(DIRECTORY APPEND PROPERTY ADDITIONAL_MAKE_CLEAN_FILES coverage)
