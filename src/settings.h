#pragma once

#include <unordered_map>
#include <fstream>
#include <vector>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "json/json.h"
#include "SDK/SDK.h"
#include "fonts.h"
#include "Utils/draw.h"
#include "Utils/util.h"
#include "Utils/util_sdk.h"
#include "config.h"

namespace Settings
{
    namespace Aimbot
    {
        extern bool enable;
        extern ButtonCode_t key;
        extern float sensitivity;
        extern float fov;
        extern float tu;
        extern float ku;
    }

    namespace ESP
    {
        extern bool enable;
        extern ButtonCode_t key;
        extern bool show_bone;
        extern bool show_name;
    }

    void LoadDefaultsOrSave(std::string path);
    void LoadConfig();
}
