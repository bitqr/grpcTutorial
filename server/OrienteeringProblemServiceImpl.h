#include <grpc/grpc.h>
#include "op-interface.grpc.pb.h"
#include "op-interface.pb.h"


class OrienteeringProblemServiceImpl final : public OrienteeringProblemService::Service {

public:

    grpc::Status Optimize(grpc::ServerContext* context, const OrienteeringProblemRequest* request, OrienteeringProblemResponse* response) override;

private:
    grpc::Status logExceptionAndReturnStatus(const std::string& errorMessage);

};
