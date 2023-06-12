#pragma once

#include "Engine.h"

class GameObject
{
private:
	Vector2 position;
	char character;
	std::vector<PComponent> components;

public:
	GameObject(char character);
	~GameObject();

public:
	const Vector2& GetPosition() { return position; }
	void SetPosition(const Vector2& position) { this->position = position; }
	const char GetCharacter() { return character; }

public:
	template <typename T>
	T GetComponent();
	void AddComponent(PComponent component);

}typedef* PGameObject;
