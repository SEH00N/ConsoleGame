#include "Engine.h"

Camera::Camera(Vector2 boundingBox) : boundingBox{boundingBox}
{
}

void Camera::Render(const Vector2& position, const std::string& character)
{
	if ((this->position.x - (boundingBox.x / 2)) < position.x &&
		position.x < (this->position.x + (boundingBox.x / 2)) &&
		(this->position.y - (boundingBox.y / 2)) < position.x &&
		position.y < (this->position.y + (boundingBox.y / 2)))
	{
		Go2xy(position.x, position.y);
		std::cout << character;
	}
}
