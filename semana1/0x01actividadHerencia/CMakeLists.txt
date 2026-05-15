cmake_minimum_required(VERSION 3.10)
project(ActividadHerencia)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/lib)

add_library(actividadHerenciaLib
	lib/circle.cpp
	lib/rectangle.cpp
	lib/polygon.cpp
    lib/shape.cpp
)

add_executable(ActividadHerencia main.cpp)
target_link_libraries(ActividadHerencia PRIVATE actividadHerenciaLib)

# Place final executable into a top-level __release__ directory inside the source tree
set(RELEASE_OUTPUT_DIR "${CMAKE_SOURCE_DIR}/__release__")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${RELEASE_OUTPUT_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${RELEASE_OUTPUT_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${RELEASE_OUTPUT_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${RELEASE_OUTPUT_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL ${RELEASE_OUTPUT_DIR})

# For multi-config generators ensure the target also uses the same directory
set_target_properties(ActividadHerencia PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY "${RELEASE_OUTPUT_DIR}"
	RUNTIME_OUTPUT_DIRECTORY_DEBUG "${RELEASE_OUTPUT_DIR}"
	RUNTIME_OUTPUT_DIRECTORY_RELEASE "${RELEASE_OUTPUT_DIR}"
	RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${RELEASE_OUTPUT_DIR}"
	RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL "${RELEASE_OUTPUT_DIR}"
)
