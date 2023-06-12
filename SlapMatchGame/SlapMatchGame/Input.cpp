#include "Input.h"

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
		KeyState& state = states[key];

		if (asciiKeys[key] & 0x80) //�ش� Ű�� �Էµ��� ��
		{
			//�� ������ ������ �־��ٸ� Press ����
			if (state == KeyState::Press || state == KeyState::Down)
				state = KeyState::Press;
			else //�� ���� ������ �ִ� Ű�� �ƴ϶�� Down ����
				state = KeyState::Down;
		}
		else //�ش� Ű�� �Է��� ���� �ʾ��� ��
		{
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