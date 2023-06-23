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
	BYTE asciiKeys[KeyTypeCount] = {};
	if (::GetKeyboardState(asciiKeys) == false)
		return;

	for (int key = 0; key < KeyTypeCount; ++key)
	{
		if (asciiKeys[key] & 0x80) //�ش� Ű�� �Էµ��� ��
		{
			KeyState& state = states[key];

			//�� ������ ������ �־��ٸ� Press ����
			if (state == KeyState::Press || state == KeyState::Down)
				state = KeyState::Press;
			else //�� ���� ������ �ִ� Ű�� �ƴ϶�� Down ����
				state = KeyState::Down;
		}
		else //�ش� Ű�� �Է��� ���� �ʾ��� ��
		{
			KeyState& state = states[key];

			//�� ���� ������ �־��ٸ� Up ����
			if (state == KeyState::Press || state == KeyState::Down)
				state = KeyState::Up;
			else //�� ���� ������ ���� �ʾҴٸ� None ����
				state = KeyState::None;
		}
	}

	POINT mousePos;
	::GetCursorPos(&mousePos);

	mousePosition.x = mousePos.x;
	mousePosition.y = mousePos.y;
}