//
// Created by cl d on 2024/7/13.
//

#include "dart_state.h"

namespace tonic {

DartState *DartState::Current() {
    return new DartState();
}
}