cmake_minimum_required(VERSION 3.29)
project(toy_flutter)

set(CMAKE_CXX_STANDARD 20)


include_directories(../toy_flutter)

add_library(tonic lib/third_party/tonic/dart_state.cpp lib/third_party/tonic/dart_state.h
        shell/common/animator.cpp
        shell/common/animator.h
        shell/common/vysnc_waiter.cpp
        shell/common/vysnc_waiter.h
        shell/common/shell.cpp
        shell/common/shell.h
        shell/common/platform_view.cpp
        shell/common/platform_view.h)

add_executable(toy_flutter main.cpp
        shell/engine.cpp
        shell/engine.h
        runtime/runtime_controller.cpp
        runtime/runtime_controller.h
        runtime/runtime_delegate.cpp
        runtime/runtime_delegate.h
        lib/ui/window/PlatformConfiguration.cpp
        lib/ui/window/PlatformConfiguration.h
        lib/ui/ui_dart_state.cpp
        lib/ui/ui_dart_state.h)

target_link_libraries(toy_flutter tonic)
