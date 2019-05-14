include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})

set(GTEST_LIBS gtest gtest_main gmock gmock_main)

set(EXAMPLELIBRARY_SRC ExampleLibraryTest.cpp ../../lab2/array2D/array2D.cpp ../../lab2/array2D/array2D.h ../../lab2/array2D/main.cpp ../../lab3/tinyurl/TinyUrl.cpp ../../lab3/tinyurl/TinyUrl.h ../../lab3/tinyurl/main.cpp)

add_executable(example_examplelibrary_tests ${EXAMPLELIBRARY_SRC})

target_link_libraries(example_examplelibrary_tests ${GTEST_LIBS})
target_link_libraries(example_examplelibrary_tests libexamplelibrary)