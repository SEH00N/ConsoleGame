#pragma once

#include "Engine.h"

class GameObject
{
public:
	PVector2 position;
	std::vector<PComponent> components;

}typedef *PGameObject;

class Component
{
public:
	virtual void Init() abstract;
	virtual void Update() abstract;
	virtual void Release() abstract;
}typedef *PComponent;

class Input
{
public:
	void Init();
	void Update();
	void Release();
};