#pragma once

#include "Engine.h"

class Camera : Component
{
public:
	virtual void Init() override;
	virtual void Update() override;
	virtual void Release() override;

}typedef* PCamera;