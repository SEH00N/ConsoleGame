#pragma once

enum class KeyCode
{
	Up = VK_UP,
	Down = VK_DOWN,
	Left = VK_LEFT,
	Right = VK_RIGHT,
	Space = VK_SPACE,
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