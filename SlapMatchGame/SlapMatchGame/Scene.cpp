#include "Scene.h"

Scene::Scene(PCamera cam) : camera{cam}
{
}

Scene::~Scene()
{
}

void Scene::Init()
{
}

void Scene::Update()
{
	for (auto gameObject : gameObjects)
		gameObject->Update();
}

void Scene::Release()
{
	for (auto gameObject : gameObjects)
		gameObject->Release();
}

void Scene::Render()
{
	for (PGameObject obj : gameObjects)
		camera->Render(obj->GetPosition(), obj->GetCharacter());
}

void Scene::AddGameObject(PGameObject gameObject)
{
	gameObject->Init();
	gameObjects.push_back(gameObject);
}

void Scene::RemoveGameObject(PGameObject gameObject)
{
	gameObject->Release();

	for (auto iter = gameObjects.begin(); iter != gameObjects.end(); ++iter)
	{
		if ((*iter) == gameObject)
		{
			gameObjects.erase(iter);
			break;
		}
	}

	delete gameObject;
}
