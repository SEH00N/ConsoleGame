#include "GameObject.h"

GameObject::GameObject(char character) : character{ character }
{
}

GameObject::~GameObject()
{
	for (PComponent component : components)
		if (component != nullptr)
			delete component;
}

void GameObject::Init()
{
}

void GameObject::Update()
{
	for (PComponent component : components)
		component->Update();
}

void GameObject::Release()
{
	for (auto iter = components.begin(); iter != components.end(); iter++)
	{
		(*iter)->Release();
		iter = components.erase(iter);

		delete* iter;
	}
}

template<typename T>
T GameObject::GetComponent()
{
	for (PComponent component : components)
		if (components->GetType == typeid(T))
			return static_cast<T*>(component);

	return nullptr;
}


void GameObject::AddComponent(PComponent component)
{
	component->gameObject = static_cast<PGameObject>(this);
	component->Init();
	components.push_back(component);
}

void GameObject::Delete()
{
	scene->RemoveGameObject(static_cast<PGameObject>(this));
}
