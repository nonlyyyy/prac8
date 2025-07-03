file(GLOB_RECURSE LIB_SOURCES "*.cpp")
add_library(tttlib ${LIB_SOURCES})
target_include_directories(tttlib PUBLIC include)