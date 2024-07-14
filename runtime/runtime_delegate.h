//
// Created by cl d on 2024/7/13.
//

#ifndef TOY_FLUTTER_RUNTIME_DELEGATE_H
#define TOY_FLUTTER_RUNTIME_DELEGATE_H

namespace toyflutter {
    class RuntimeDelegate {
    public:
        virtual void ScheduleFrame(bool regenerate_layer_trees = true) = 0;
    };
}


#endif //TOY_FLUTTER_RUNTIME_DELEGATE_H
