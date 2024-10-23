add_library(solution_lib STATIC
        solution.cpp
)

target_include_directories(solution_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)
add_executable(labs_OOP main.cpp)
target_link_libraries(labs_OOP PRIVATE solution_lib)
