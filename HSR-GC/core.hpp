#pragma once

#include <Windows.h>
#include <iostream>
#include <cstdint>
#include <memory.h>
#include <map>
#include <mutex>
#include <vector>
#include <atomic>
#include <array>
#include <list>
#include <string>
#include <unordered_map>	
#include <optional>
#include <filesystem>
#include <fstream>

#include "dependencies/Direct3D/Direct3D.h"

#include <ImGui/imgui.h>
#include <ImGui/backends/imgui_impl_dx11.h>
#include <ImGui/backends/imgui_impl_win32.h>
#include <ImGui/imgui_internal.h>
#include <ImGui/misc/cpp/imgui_stdlib.h>

#include "dependencies/MinHook/MinHook.h"

#include "globals.hpp"

#include "utils/hooks.h"
#include "utils/utils.h"
#include "utils/config.h"

//#include "features/speedhack.h"
//#include "features/dialogue.h"
//#include "features/other.h"

#include "overlay/overlay.h"
#include "overlay/device.h"