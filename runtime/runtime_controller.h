//
// Created by cl d on 2024/7/13.
//

#ifndef TOY_FLUTTER_RUNTIME_CONTROLLER_H
#define TOY_FLUTTER_RUNTIME_CONTROLLER_H
#include <memory>
#include "../lib/ui/window/PlatformConfiguration.h"

namespace toyflutter {
class RuntimeDelegate;
class RuntimeController: public PlatformConfigurationClient{
public:
    RuntimeController(RuntimeDelegate& p_client);

    std::unique_ptr<RuntimeController> Spwan(RuntimeDelegate& p_client);

    void ScheduleFrame() override;

private:
    RuntimeDelegate& client_;
};
}


#endif //TOY_FLUTTER_RUNTIME_CONTROLLER_H
