cmake_minimum_required(VERSION 2.8)

project (GrpcTutorial CXX)

file(GLOB SOURCES *.h *.hpp *.cpp *.cc)

include(FetchContent)
FetchContent_Declare(
  gRPC
  GIT_REPOSITORY https://github.com/grpc/grpc
  GIT_TAG        v1.32.0
)
set(FETCHCONTENT_QUIET OFF)
FetchContent_MakeAvailable(gRPC)

add_executable(grpcTutorial ${SOURCES})

target_include_directories(grpcTutorial PRIVATE "/home/abdel/grpc/include")

target_link_libraries (grpcTutorial grpc++)

install (TARGETS grpcTutorial DESTINATION "/home/abdel/Dev/Tutorials/grpcTutorial/bin" CONFIGURATIONS Release)
