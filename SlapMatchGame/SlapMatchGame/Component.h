#pragma once

//typedef class GameObject* PGameObject;
#include "Engine.h"

typedef class Component
{
public:
	PGameObject gameObject;

public:
	virtual void Init() abstract;
	virtual void Update() abstract;
	virtual void Release() abstract;

public:
	std::type_index GetType() { return typeid(*this); }

}Component, *PComponent;
//typedef class Component* PComponent;
//}typedef* PComponent;
