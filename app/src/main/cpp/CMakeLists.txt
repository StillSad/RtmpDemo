cmake_minimum_required(VERSION 3.4.1)

add_subdirectory(librtmp)

include_directories(librtmp libx264/include)


add_library(
        native-lib
        SHARED
        native-lib.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -L${CMAKE_SOURCE_DIR}/libx264/libs/${CMAKE_ANDROID_ARCH_ABI}")
target_link_libraries( # Specifies the target library.
        native-lib
        rtmp
        x264
        log)
