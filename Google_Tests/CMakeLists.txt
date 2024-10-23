add_subdirectory(lib)

set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)

add_executable(solution_tests sol_tests.cpp)

target_link_libraries(solution_tests
        PRIVATE
        solution_lib
        gtest
        gtest_main
)

target_include_directories(solution_tests PRIVATE ${CMAKE_SOURCE_DIR}/include)

add_test(NAME sol_tests COMMAND solution_tests)