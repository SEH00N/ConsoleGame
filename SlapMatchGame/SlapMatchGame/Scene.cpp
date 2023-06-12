#include "Scene.h"

void Scene::Render()
{
	for (PGameObject obj : gameObjects)
		camera.Render(obj->GetPosition(), obj->GetCharacter());
}
