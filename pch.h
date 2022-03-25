#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

#include <string>
#include <sstream>
#include <vector>
#include <thread>
#include <mutex>
#include <atomic>
#include <chrono>
#include <limits>
#include <algorithm>
#include <functional>

#include "openvr_driver.h"
#include "glm/gtc/quaternion.hpp"
#include "glm/gtx/transform.hpp"
#include "SimpleIni.h"

#include "nvAR.h"
#include "nvAR_defs.h"
#include "nvCVImage.h"
