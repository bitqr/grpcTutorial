FROM ubuntu:20.04

# Needed timezone for configuring tzdata
ENV TZ=Europe/Paris
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

RUN apt-get update && apt-get install -y make cmake gcc g++ build-essential

# Install protobuf dependency
RUN wget https://github.com/protocolbuffers/protobuf/releases/download/v3.18.1/protobuf-all-3.18.1.tar.gz && \
    tar xf protobuf-all-3.18.1.tar.gz && cd protobuf-3.18.1 && \
    ./configure && make -j 8 && make install && ldconfig

# Install gRPC dependency
RUN git clone -b v1.32.0 https://github.com/grpc/grpc && \
    cd grpc && \
    git submodule update --init && \
    mkdir -p cmake/build && \
    cd cmake/build && \
    cmake ../.. && \
    make -j 8

# Generate interface code
RUN protoc --cpp_out=. op-interface.proto && \
    protoc --grpc_out=. --plugin=protoc-gen-grpc=/grpc/cmake/build/grpc_cpp_plugin op-interface.proto
