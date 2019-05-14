
project(polybius)

set(HEDEAR_FILES PolyBius.h ../array2D/array2D.h)
set(SOURCE_FILES PolyBius.cpp ../array2D/array2D.cpp)

add_library(libpolybius STATIC ${SOURCE_FILES})
target_include_directories(libpolybius PUBLIC .)

add_executable(polybius ${SOURCE_FILES} main.cpp)

target_link_libraries(polybius libpolybius)

