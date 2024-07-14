//
// Created by cl d on 2024/7/13.
//

#ifndef TOY_FLUTTER_ENGINE_H
#define TOY_FLUTTER_ENGINE_H
#include <memory>
#include <string>
#include "../runtime/runtime_controller.h"
#include "../runtime/runtime_delegate.h"
#include "common/animator.h"
using namespace std;
namespace toyflutter {
class Engine final : public RuntimeDelegate {
public:
    class Delegate {
    public:
        virtual void testHolderFunc();
    };

    Engine(Delegate& delegate,
           std::unique_ptr<Animator> animator,
           std::unique_ptr<RuntimeController> runtime_controller);
    Engine(Delegate& delegate,std::unique_ptr<Animator> animator);

    std::unique_ptr<Engine> Spawn(Delegate& delegate);

    ~Engine();

    void ScheduleFrame(bool regenerate_layer_trees) override;

private:
    Engine::Delegate& delegate_;
    std::unique_ptr<RuntimeController> runtime_controller_;
    std::unique_ptr<Animator> animator_;
};
}

#endif //TOY_FLUTTER_ENGINE_H
