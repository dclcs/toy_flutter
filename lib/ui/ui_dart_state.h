//
// Created by cl d on 2024/7/13.
//

#ifndef TOY_FLUTTER_UI_DART_STATE_H
#define TOY_FLUTTER_UI_DART_STATE_H
#include "../third_party/tonic/dart_state.h"
#include "window/PlatformConfiguration.h"
#include <memory>

namespace toyflutter {
class UIDartState: public tonic::DartState{
public:
    static UIDartState* Current();

    PlatformConfiguration* platform_configuration() const {
        return platform_configuration_.get();
    }

private:
    std::unique_ptr<PlatformConfiguration> platform_configuration_;
};
}

#endif //TOY_FLUTTER_UI_DART_STATE_H
