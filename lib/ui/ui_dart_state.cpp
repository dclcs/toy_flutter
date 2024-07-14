//
// Created by cl d on 2024/7/13.
//

#include "ui_dart_state.h"
using namespace tonic;

namespace toyflutter {
    UIDartState *UIDartState::Current() {
        return static_cast<UIDartState*>(DartState::Current());
    }
}