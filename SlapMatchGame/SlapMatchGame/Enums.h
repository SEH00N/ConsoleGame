#pragma once

enum class KeyCode
{
	Space = VK_SPACE,
	Left = VK_LEFT,
	Up = VK_UP,
	Right = VK_RIGHT,
	Down = VK_DOWN,
	END,
};

enum class KeyState
{
	None,
	Down,
	Press,
	Up,
	END,
};