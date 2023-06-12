#pragma once

#include "Engine.h"

class Component
{
public:
	PGameObject gameObject;

public:
	virtual void Init() abstract;
	virtual void Update() abstract;
	virtual void Release() abstract;

public:
	std::type_index GetType() { return typeid(*this); }

}typedef* PComponent;
