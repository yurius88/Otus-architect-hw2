#pragma once

struct Vector
{
	Vector() : X(0), Y(0) {}
	Vector(int x, int y) : X(x), Y(y) {}
	int X;
	int Y;
};

Vector operator+ (const Vector& v1, const Vector& v2)
{
	return Vector(v1.X + v2.X, v1.Y + v2.Y);
}

bool operator == (const Vector& v1, const Vector& v2)
{
	return v1.X == v2.X && v1.Y == v2.Y;
}
