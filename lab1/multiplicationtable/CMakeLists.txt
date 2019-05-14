
project(multiplicationable)

set(HEDEAR_FILES MultipliCationtable.h)
set(SOURCE_FILES MultipliCationtable.cpp)

add_library(libmultiplicationtable STATIC ${SOURCE_FILES})
target_include_directories(libmultiplicationtable PUBLIC .)

add_executable(multiplicationtable ${SOURCE_FILES} main.cpp)

target_link_libraries(multiplicationtable libmultiplicationtable)

