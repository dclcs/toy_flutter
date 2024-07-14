//
// Created by cl d on 2024/7/13.
//

#include "PlatformConfiguration.h"
#include "../ui_dart_state.h"

namespace toyflutter {
    void PlatformConfigurationNativeApi::ScheduleFrame() {
        UIDartState::Current()->platform_configuration()->client()->ScheduleFrame();

    }
}