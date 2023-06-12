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
	component->gameObject = this;
	components.push_back(component);
}
