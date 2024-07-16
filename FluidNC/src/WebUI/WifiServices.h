// Copyright (c) 2014 Luc Lebosse. All rights reserved.
// Use of this source code is governed by a GPLv3 license that can be found in the LICENSE file.

#pragma once

#include "src/Module.h"

namespace WebUI {
    class WiFiServices : public Module {
    public:
        WiFiServices();

        static void end();

        void init() override;
        void poll() override;

        ~WiFiServices();
    };

    extern WiFiServices wifi_services;
}
