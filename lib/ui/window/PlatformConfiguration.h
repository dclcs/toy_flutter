//
// Created by cl d on 2024/7/13.
//

#ifndef TOY_FLUTTER_PLATFORMCONFIGURATION_H
#define TOY_FLUTTER_PLATFORMCONFIGURATION_H

namespace toyflutter {
class PlatformConfigurationNativeApi {
public:
    static void ScheduleFrame();
};

class PlatformConfigurationClient {
    virtual void ScheduleFrame() = 0;
};

class PlatformConfiguration final {
public:
    explicit PlatformConfiguration(PlatformConfiguration* client);

    // PlatformConfiguration is not copyable
    PlatformConfiguration(const PlatformConfiguration&) = delete;
    PlatformConfiguration& operator=(const PlatformConfiguration&) = delete;

    ~PlatformConfiguration();

    PlatformConfigurationClient* client() const { return client_; }


private:
    PlatformConfigurationClient* client_;
};
}

#endif //TOY_FLUTTER_PLATFORMCONFIGURATION_H
