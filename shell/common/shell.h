//
// Created by cl d on 2024/7/14.
//

#ifndef TOY_FLUTTER_SHELL_H
#define TOY_FLUTTER_SHELL_H

#include <memory>
#include <functional>
#include "animator.h"
#include "../engine.h"

namespace toyflutter {
class Shell final : public Animator::Delegate,
                    public Engine::Delegate {
public:
    template<class T>
    using CreateCallback = std::function<std::unique_ptr<T>(Shell&)>;
    typedef std::function<std::unique_ptr<Engine>(
            Engine::Delegate& delegate,
            std::unique_ptr<Animator> animator)>
            EngineCreateCallback;


    static std::unique_ptr<Shell> Create();
    ~Shell();

    Shell();
    static std::unique_ptr<Shell> CreateShellOnPlatformThread(
            const Shell::EngineCreateCallback& on_create_engine
    );
    static std::unique_ptr<Shell> CreateWithSnapshot(
            const EngineCreateCallback& on_create_engine);
};
}

#endif //TOY_FLUTTER_SHELL_H
