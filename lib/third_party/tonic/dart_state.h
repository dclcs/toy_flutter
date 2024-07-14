//
// Created by cl d on 2024/7/13.
//

#ifndef TOY_FLUTTER_DART_STATE_H
#define TOY_FLUTTER_DART_STATE_H
#include <memory>

namespace tonic {

class DartState : public std::enable_shared_from_this<DartState> {
public:
    virtual ~DartState();

    static DartState *Current();
};

}

#endif //TOY_FLUTTER_DART_STATE_H
