// SPDX-FileCopyrightText: Copyright 2018 sudachi Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "core/hle/service/service.h"

namespace Core {
class System;
}

namespace Service::AM {

class SPSM final : public ServiceFramework<SPSM> {
public:
    explicit SPSM(Core::System& system_);
    ~SPSM() override;
};

} // namespace Service::AM
