#pragma once

#include "Engine.h"

class Input
{
private:
	Input();
	~Input();

private:
	static Input* instance;

public:
	static Input* GetInstance()
	{
		if (instance == nullptr)
			instance = new Input();

		return instance;
	}

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
	inline KeyState GetState(KeyCode keycode) 
	{ 
		int code = static_cast<UINT8>(keycode);
		return states[code]; 
	}
};