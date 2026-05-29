cmake_minimum_required(VERSION 3.10)
project(ActividadExcepciones)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB ACT_EX_SRC "${CMAKE_SOURCE_DIR}/src/*.cpp")
list(REMOVE_ITEM ACT_EX_SRC "${CMAKE_SOURCE_DIR}/src/main.cpp")

add_library(ActividadExcepcionesLib)
foreach(src_file IN LISTS ACT_EX_SRC)
    target_sources(ActividadExcepcionesLib PRIVATE ${src_file})
endforeach()

add_executable(ActividadExcepciones src/main.cpp)
target_link_libraries(ActividadExcepciones PRIVATE ActividadExcepcionesLib)

# Place final executable into a top-level __release__ directory inside the source tree
set(RELEASE_OUTPUT_DIR "${CMAKE_SOURCE_DIR}/__release__")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${RELEASE_OUTPUT_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${RELEASE_OUTPUT_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${RELEASE_OUTPUT_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${RELEASE_OUTPUT_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL ${RELEASE_OUTPUT_DIR})

# For multi-config generators ensure the target also uses the same directory
set_target_properties(ActividadExcepciones PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${RELEASE_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${RELEASE_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${RELEASE_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${RELEASE_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL "${RELEASE_OUTPUT_DIR}"
)