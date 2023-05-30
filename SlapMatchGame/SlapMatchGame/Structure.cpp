#include "Structure.h"

Vector2::Vector2(int x, int y) : x{ x }, y{ y } {}
Vector2::~Vector2() {}

Vector2 Vector2::operator+(const Vector2& other)
{
	Vector2 result(this->x + other.x, this->y + other.y);
	return result;
}

Vector2 Vector2::operator+=(const Vector2& other)
{
	this->x += other.x;
	this->y += other.y;

	return *this;
}

Vector2 Vector2::operator*(const float& value)
{
	Vector2 result(this->x * value, this->y * value);
	return result;
}

Vector2 Vector2::operator*=(const float& value)
{
	this->x *= value;
	this->y *= value;
	return *this;
}
