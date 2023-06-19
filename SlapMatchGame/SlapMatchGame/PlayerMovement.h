#pragma once

#include "Engine.h"

class PlayerMovement : public Component
{
public:
	void Init() override;
	void Update() override;
	void Release() override;
};

