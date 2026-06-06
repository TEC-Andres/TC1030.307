cmake_minimum_required(VERSION 3.10)
project(sobrecargaDeOperadores)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/lib)

file(GLOB ACT_EX_SRC "${CMAKE_SOURCE_DIR}/lib/*.cpp")
list(REMOVE_ITEM ACT_EX_SRC "${CMAKE_SOURCE_DIR}/lib/main.cpp")

add_library(sobrecargaDeOperadoresLib)
foreach(src_file IN LISTS ACT_EX_SRC)
    target_sources(sobrecargaDeOperadoresLib PRIVATE ${src_file})
endforeach()

add_executable(sobrecargaDeOperadores main.cpp)
target_link_libraries(sobrecargaDeOperadores PRIVATE sobrecargaDeOperadoresLib)

# Place final executable into a top-level __release__ directory inside the source tree
set(RELEASE_OUTPUT_DIR "${CMAKE_SOURCE_DIR}/__release__")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${RELEASE_OUTPUT_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${RELEASE_OUTPUT_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${RELEASE_OUTPUT_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${RELEASE_OUTPUT_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL ${RELEASE_OUTPUT_DIR})

# For multi-config generators ensure the target also uses the same directory
set_target_properties(sobrecargaDeOperadores PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${RELEASE_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${RELEASE_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${RELEASE_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${RELEASE_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL "${RELEASE_OUTPUT_DIR}"
)