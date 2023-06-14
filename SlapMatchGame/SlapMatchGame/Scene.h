#pragma once

class GameObject typedef PGameObject;

#include "Engine.h"

class Scene
{
public:
	Scene(PCamera cam);
	~Scene();

private:
	std::vector<PGameObject> gameObjects;
	PCamera camera;

public:
	void Init();
	void Update();
	void Release();

public:
	void Render();	

public:
	void AddGameObject(PGameObject gameObject);
	void RemoveGameObject(PGameObject gameObject);

public:
	std::type_index GetType() { return typeid(*this); }

}typedef* PScene;