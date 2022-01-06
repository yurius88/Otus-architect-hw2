#pragma once
#include "IMoveable.h"

class MockMoveableObject : public IMoveable
{
public:
	MockMoveableObject(const Vector& startPos, const Vector& velocity)
		: _position(startPos),
		_velocity(velocity)
	{

	}
	Vector getPosition()
	{
		return _position;
	}
	void setPosition(const Vector& pos)
	{
		_position = pos;
	}
	Vector getVelocity()
	{
		return _velocity;
	}
private:
	Vector _velocity, _position;
};
