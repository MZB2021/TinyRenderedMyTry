PROJECT(DrawHead)
CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ggdb -g -O0")

INCLUDE_DIRECTORIES("${CMAKE_SOURCE_DIR}/../")

ADD_EXECUTABLE(DrawHeadLine drawHeadLine.cpp ../geometry.cpp ../model.cpp ../tgaimage.cpp tools.cpp)
