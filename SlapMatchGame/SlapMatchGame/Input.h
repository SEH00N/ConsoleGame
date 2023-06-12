#pragma once

#include "Engine.h"

class Input
{
private:
	std::vector<KeyState> states;
	Vector2 mousePosition;

public:
	void Init();
	void Update();

public:
	PVector2 GetMousePosition() { return &mousePosition; }
	bool GetKeyDown(KeyCode keycode) { return GetState(keycode) == KeyState::Down; }
	bool GetKey(KeyCode keycode) { return GetState(keycode) == KeyState::Press; }
	bool GetKeyUp(KeyCode keycode) { return GetState(keycode) == KeyState::Up; }

private:
	KeyState GetState(KeyCode keycode) { return states[static_cast<UINT8>(keycode)]; }
};