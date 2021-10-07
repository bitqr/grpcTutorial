# grpcTutorial
A little tutorial on the use of gRPC for optimization use case

 ## Which optimization problem ?

 Let's handle the _Orienteering Problem_ (OP). Also know as the _Selective Travelling Salesman Problem_ (STSP), it's very simple to describe: Your goal is to collect a maximum number of items on the plane, within a limited amount of time, and you start on (0, 0). Of course, the choice of the items is important, but also the order of visit. This problem is then even harder than the well-known Knapsack Problem. It has been studied by Tsiligirides et al., and several solutions approaches were provided, such as metaheuristics (insert reference), and cutting plane schemes (using non-compact formulation, insert reference). In its general formulation, the items have weights, but today, let's just assume they all have the same weight.

## Which model ?

- Create a protobuf interface for the orienteering problem

What do we need here ? An instance of the problem is a set of items on the plane, so let's just say, a set of (x, y) coordinates! And, of course, a time limit (without a time limit, it's too easy, right?)

A solution (the response of the server) would be an ordered list of collected items.

## Which language ?

- The server side will be written in C++ and the client side in Python.

## Server side

Write the CMakeLists.txt file, to include the grpc dependency.
Install protobuf for C++.

Generate the code (see Dockerfile for instructions).

Write the server code and run it.

The server started. It's waiting for a message from the client. Once the message is received, it computes a solution and sends it back in the response.

## Client side

Install grpc tools with pip:

`pip install grpcio-tools`

Generate code with the following command:

`python3 -m grpc_tools.protoc -I../protos  --python_out=. --grpc_python_out=. op-interface.proto`

where `protos` is the location of the .proto file.

Write the client code.
