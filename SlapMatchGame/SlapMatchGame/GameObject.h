#pragma once

class Scene typedef* PScene;
class Component typedef* PComponent;
#include "Structure.h"
#include "Engine.h"

class GameObject
{
private:
	Vector2 position;
	PScene scene;
	char character;
	std::vector<PComponent> components;

public:
	GameObject(char character);
	~GameObject();

public:
	void Init();
	void Update();
	void Release();

public:
	const Vector2& GetPosition() { return position; }
	void SetPosition(const Vector2& position) { this->position = position; }
	const char GetCharacter() { return character; }

public:
	template <typename T>
	T GetComponent();
	void AddComponent(PComponent component);
	void Delete();

}typedef* PGameObject;
