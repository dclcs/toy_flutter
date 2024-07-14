//
// Created by cl d on 2024/7/14.
//

#include "animator.h"

namespace toyflutter {
Animator::Animator(Delegate &delegate, std::unique_ptr<VsyncWaiter> waiter)
  : delegate_(delegate),
    waiter_(std::move(waiter)){

}

Animator::~Animator() = default;

void Animator::RequestFrame(bool regenerate_layer_trees) {
    if (regenerate_layer_trees) {

    }
}

void Animator::AwaitVSync() {
//    waiter_->AsyncWaitForVsync();
}

}