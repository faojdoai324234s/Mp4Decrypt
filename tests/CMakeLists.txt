cmake_minimum_required( VERSION 3.19 )

set( SOURCES MemoryLeakTest.cpp )
set( test_name MemoryLeakTest )
add_executable( ${test_name} ${SOURCES} )
# target_link_libraries( ${test_name} SomeLibrary )
add_test( ${test_name} ${test_name} )
