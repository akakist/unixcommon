cmake_minimum_required(VERSION 3.19)

project (MetricsHTTPProvider)

if(UNIX AND NOT APPLE)
SET(LINUX true)
endif()

if(LINUX)
    set(CMAKE_PREFIX_PATH $ENV{HOME}/Qt/5.15.2/gcc_64)
    set(CMAKE_SHARED_LINKER_FLAGS "-Xlinker --export-dynamic -Xlinker -zdefs")
else()
    set(CMAKE_PREFIX_PATH $ENV{HOME}/Qt/5.15.2/clang_64)
endif()




include_directories( /usr/local/include src)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -fPIC ")
link_directories( /usr/local/lib /home/alexander_belyalov/gears/build/lib )





ADD_SUBDIRECTORY(src)
#ADD_SUBDIRECTORY(test)

    

