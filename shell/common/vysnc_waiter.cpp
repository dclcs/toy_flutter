//
// Created by cl d on 2024/7/14.
//

#include "vysnc_waiter.h"

namespace toyflutter {

VsyncWaiter::VsyncWaiter() {}

VsyncWaiter::~VsyncWaiter() = default;

void VsyncWaiter::AsyncWaitForVsync(const Callback &callback) {
    if (!callback) {
        return;
    }

    {
        ///
    }
    AwaitVSync();
}

}