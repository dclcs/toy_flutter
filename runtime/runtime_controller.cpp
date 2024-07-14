//
// Created by cl d on 2024/7/13.
//

#include "runtime_controller.h"

namespace toyflutter {
    void RuntimeController::ScheduleFrame() {
        client_.ScheduleFrame();
    }
}