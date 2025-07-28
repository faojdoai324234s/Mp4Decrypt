cmake_minimum_required( VERSION 3.19 )

set( SOURCES MemoryLeakTest.cpp )
set( test_name MemoryLeakTest )
add_executable( ${test_name} ${SOURCES} )
# target_link_libraries( ${test_name} SomeLibrary )
target_compile_options( ${test_name} PRIVATE -coverage )
target_link_options( ${test_name} PRIVATE -coverage )
add_test( ${test_name} ${test_name} )
