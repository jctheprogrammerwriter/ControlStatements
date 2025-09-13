cmake_minimum_required(VERSION 4.0)
project(ControlStatements)

set(CMAKE_CXX_STANDARD 26)

add_executable(ControlStatements main.cpp)

find_package(fmt CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)
target_sources(${PROJECT_NAME}
        PUBLIC
        FILE_SET CXX_MODULES FILES
        DieRoll.ixx
        IncomeGenerator.ixx
)