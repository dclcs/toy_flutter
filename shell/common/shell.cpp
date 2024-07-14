//
// Created by cl d on 2024/7/14.
//

#include "shell.h"

namespace toyflutter {

std::unique_ptr<Engine> CreateEngine(
        Engine::Delegate& delegate,
        std::unique_ptr<Animator> animator) {
    return std::make_unique<Engine>(
            delegate,
            std::move(animator)
    );
}

std::unique_ptr<Shell> Shell::Create() {
    return CreateWithSnapshot(CreateEngine);
}

std::unique_ptr<Shell> Shell::CreateWithSnapshot(
    const EngineCreateCallback &on_create_engine
) {
    std::unique_ptr<Shell> shell = CreateShellOnPlatformThread(on_create_engine);
    return shell;
}

std::unique_ptr<Shell> Shell::CreateShellOnPlatformThread(
        const EngineCreateCallback &on_create_engine) {

}

}