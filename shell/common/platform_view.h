//
// Created by cl d on 2024/7/14.
//

#ifndef TOY_FLUTTER_PLATFORM_VIEW_H
#define TOY_FLUTTER_PLATFORM_VIEW_H
#include <memory>
#include "vysnc_waiter.h"
namespace toyflutter {
class PlatformView {
public:
    class Delegate {};

    explicit PlatformView(Delegate& delegate);
    virtual ~PlatformView();
    virtual std::unique_ptr<VsyncWaiter> CreateVSyncWaiter();
};
}


#endif //TOY_FLUTTER_PLATFORM_VIEW_H
