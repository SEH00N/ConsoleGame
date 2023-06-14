#pragma once

class Vector2;

class Camera
{
public:
	Camera(Vector2 boundingBox);

private:
	Vector2 position;
	Vector2 boundingBox;

public:
	void Render(const Vector2& position, const char& character);

public:
	const Vector2& GetPosition() { return position; }
	void SetPosition(const Vector2& position) { this->position = position; }
}typedef* PCamera;

