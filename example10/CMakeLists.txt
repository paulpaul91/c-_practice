cmake_minimum_required(VERSION 2.4.8)
project(example10)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_BUILD_TYPE Release)

INCLUDE_DIRECTORIES(include /opt/Matlab/extern/include)
set(LIBS

/opt/Matlab/runtime/glnxa64/libmwmclmcrrt.so
/opt/Matlab/runtime/glnxa64/libmwmclmcrrt.so.9.0
/opt/Matlab/bin/glnxa64/libmwmclmcr.so
${PROJECT_SOURCE_DIR}/lib/libmyFunc.so

)
AUX_SOURCE_DIRECTORY(src DIR_SRCS)
SET(TEST_EXAM ${DIR_SRCS})

ADD_EXECUTABLE(${PROJECT_NAME} ${TEST_EXAM})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${LIBS})
