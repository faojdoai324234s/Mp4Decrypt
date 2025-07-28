cmake_minimum_required( VERSION 3.19 )

set( library_name Mp4Decrypt )

project( ${library_name} CXX )

set( CMAKE_INCLUDE_CURRENT_DIR ON )
set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_CXX_EXTENSIONS OFF )
set( CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS True )

if( CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND CMAKE_BUILD_TYPE STREQUAL "Debug" )
    include( CTest )
endif()

if( CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING )
    #add_subdirectory( tests )
    add_executable( MemoryLeakTest tests/MemoryLeakTest.cpp )
    target_link_libraries (MemoryLeakTest PRIVATE ${library_name} )
    add_test( MemoryLeakTest MemoryLeakTest )
endif()

include_directories( include )

file( GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp ${PROJECT_SOURCE_DIR}/src/*.h )

set_property( DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${library_name} )

add_library( ${library_name} SHARED ${SRC_FILES} )

target_include_directories( ${library_name} PUBLIC ${PROJECT_SOURCE_DIR}/include )
