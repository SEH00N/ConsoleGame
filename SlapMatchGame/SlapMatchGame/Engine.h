#pragma once

#include <vector>
#include <windows.h>
#include <typeindex>
#include <iostream>

#include "Enums.h"
#include "Structure.h"
#include "Input.h"
#include "Camera.h"
#include "Scene.h"
#include "GameObject.h"
#include "Component.h"

#define PI				3.1415926535
#define Deg2Rad			PI / 180
#define Rad2Deg			180 / PI

#define KeyTypeCount	static_cast<int>(UINT8_MAX + 1)

bool Go2xy(int x, int y);