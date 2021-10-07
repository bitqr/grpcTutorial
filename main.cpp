#include "OrienteeringProblemServiceImpl.h"
#include <grpc/grpc.h>
#include <grpcpp/security/server_credentials.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <string>

int main(int argc, char** argv) {
    OrienteeringProblemServiceImpl service;
    std::unique_ptr<grpc::ServerBuilder> serverBuilder = std::make_unique<grpc::ServerBuilder>();
    serverBuilder->AddListeningPort("50051", grpc::InsecureServerCredentials());
    serverBuilder->RegisterService(&service);
    std::unique_ptr<grpc::Server> server = serverBuilder->BuildAndStart();
    std::cout << "Server listening on 50051" << std::endl;
    server->Wait();

    return 0;
}
