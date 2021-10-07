#include "OrienteeringProblemServiceImpl.h"
#include <string>

using grpc::ServerContext;
using grpc::ServerWriter;
using grpc::Status;
using grpc::StatusCode;


grpc::Status OrienteeringProblemServiceImpl::Optimize(grpc::ServerContext* context,
                                            const OrienteeringProblemRequest* request,
                                            OrienteeringProblemResponse* response)
{
    try {
        // You can add your request validation checks

        // Read the message and store it internally

        // Run the optimization
        // optimize();
    }
    catch (const std::exception& exception) {
        return logExceptionAndReturnStatus(std::string("Internal scheduler error").append(exception.what()));
    }

    return grpc::Status::OK;
}
