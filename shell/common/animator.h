//
// Created by cl d on 2024/7/14.
//

#ifndef TOY_FLUTTER_ANIMATOR_H
#define TOY_FLUTTER_ANIMATOR_H

#include <memory>
#include "vysnc_waiter.h"

namespace toyflutter {
class Animator final {
public:
    class Delegate {};
    Animator(Delegate& delegate, std::unique_ptr<VsyncWaiter> waiter);
    ~Animator();
    void RequestFrame(bool regenerate_layer_trees = true);

private:
    void AwaitVSync();

    Delegate& delegate_;
    std::shared_ptr<VsyncWaiter> waiter_;
};
}

#endif //TOY_FLUTTER_ANIMATOR_H
