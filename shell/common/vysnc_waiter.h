//
// Created by cl d on 2024/7/14.
//

#ifndef TOY_FLUTTER_VYSNC_WAITER_H
#define TOY_FLUTTER_VYSNC_WAITER_H
#include <memory>
#include <functional>

namespace toyflutter {
class VsyncWaiter : public std::enable_shared_from_this<VsyncWaiter>{
public:
    using Callback = std::function<void(std::unique_ptr<void>)>;
    virtual ~VsyncWaiter();
    void AsyncWaitForVsync(const Callback& callback);

protected:
    explicit VsyncWaiter();

    virtual void AwaitVSync() = 0;
};
}


#endif //TOY_FLUTTER_VYSNC_WAITER_H
