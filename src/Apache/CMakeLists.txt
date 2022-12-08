#cmake_minimum_required (VERSION 2.6)




add_library(ApacheAdapters  SHARED
Adapters.cpp

)
add_library(ApacheModule  SHARED
Module.cpp

)
add_library(PreloadACE  SHARED
PreloadACE.cpp
)

#include_directories(          )
#link_directories()



#target_link_libraries()


