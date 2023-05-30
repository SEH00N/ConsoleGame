#pragma once

struct Vector2 {
public:
	int x;
	int y;

public:
	Vector2(int x = 0, int y = 0);
	~Vector2();

public:
	Vector2 operator+ (const Vector2& other);
	Vector2 operator+= (const Vector2& other);
	Vector2 operator* (const float& value);
	Vector2 operator*= (const float& value);
} typedef *PVector2;