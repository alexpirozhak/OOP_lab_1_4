project(Google_tests)

add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run
        test.cpp
        ../Train.cpp
)
target_link_libraries(Google_Tests_run gtest gtest_main)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/../test.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})