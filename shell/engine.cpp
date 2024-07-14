//
// Created by cl d on 2024/7/13.
//

#include "engine.h"
#include <memory>
#include <utility>

namespace toyflutter {
    Engine::Engine(Delegate &delegate,
                   std::unique_ptr<Animator> animator,
                   std::unique_ptr<RuntimeController> runtime_controller)
                   : delegate_(delegate),
                   animator_(std::move(animator)),
                   runtime_controller_(std::move(runtime_controller)){

    }
    Engine::Engine(Delegate &delegate,std::unique_ptr<Animator> animator)
        : Engine(delegate, std::move(animator), nullptr){
        runtime_controller_ = std::make_unique<RuntimeController>(*this);
    }

    std::unique_ptr<Engine> Engine::Spawn(Delegate &delegate) {
        auto result = std::make_unique<Engine>(delegate);
        result->runtime_controller_ = runtime_controller_->Spwan(*result);
        return result;
    }

    Engine::~Engine() = default;

    void Engine::ScheduleFrame(bool regenerate_layer_trees) {

    }
}
