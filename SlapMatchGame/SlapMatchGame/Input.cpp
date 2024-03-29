#include "Input.h"

Input* Input::instance = nullptr;

Input::Input()
{
	Init();
}

Input::~Input()
{
	if(instance)
		delete instance;
}

void Input::Init()
{
	states.resize(KeyTypeCount, KeyState::None);
}

void Input::Update()
{
	BYTE asciiKeys[KeyTypeCount] = {0};

	if (::GetKeyboardState(asciiKeys) == false)
		return;

	for (int key = 0; key < KeyTypeCount; ++key)
	{
		KeyState& state = states[key];

		if (asciiKeys[key] & 0x80) //해당 키가 입력됐을 때
		{
			//그 전에도 누르고 있었다면 Press 상태
			if (state == KeyState::Press || state == KeyState::Down)
				state = KeyState::Press;
			else //그 전에 누르고 있던 키가 아니라면 Down 상태
				state = KeyState::Down;
		}
		else //해당 키가 입력이 되지 않았을 때
		{
			//그 전에 누르고 있었다면 Up 상태
			if (state == KeyState::Press || state == KeyState::Down)
				state = KeyState::Up;
			else //그 전에 누르고 있지 않았다면 None 상태
				state = KeyState::None;
		}
	}
	std::cout << '\n';
	POINT mousePos;
	::GetCursorPos(&mousePos);

	mousePosition.x = mousePos.x;
	mousePosition.y = mousePos.y;
}