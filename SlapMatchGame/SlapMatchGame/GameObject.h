#pragma once

////class Component typedef* PComponent;
//typedef class GameObject* PGameObject;
typedef class Component* PComponent;
typedef class Scene* PScene;

#include "Structure.h"
#include "Engine.h"

typedef class GameObject
{
private:
	Vector2 position;
	PScene scene;
	std::string character;
	std::vector<PComponent> components;

public:
	GameObject(std::string character);
	~GameObject();

public:
	void Init();
	void Update();
	void Release();

public:
	const Vector2& GetPosition() { return position; }
	void SetPosition(const Vector2& position) { this->position = position; }
	void SetPosition(const int x, const int y) { this->position.x = x; this->position.y = y; }
	const std::string GetCharacter() { return character; }

public:
	template <typename T>
	T GetComponent();
	void AddComponent(PComponent component);
	void Delete();

}GameObject, *PGameObject;
// typedef* PGameObject;
