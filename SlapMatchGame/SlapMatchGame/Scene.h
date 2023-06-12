#pragma once

#include "Engine.h"

class GameObject;

class Scene
{
private:
	std::vector<PGameObject> gameObjects;
	Camera camera;

public:
	virtual void Init() abstract;
	virtual void Update() abstract;
	virtual void Release() abstract;

public:
	void Render();	

public:
	void AddGameObject(PGameObject gameObject);
	void RemoveGameObject(PGameObject gameObject);

public:
	std::type_index GetType() { return typeid(*this); }

}typedef* PScene;