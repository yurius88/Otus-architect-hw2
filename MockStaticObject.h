#pragma once
#include "IMoveable.h"
#include <exception>
#include <stdexcept>

class MockStaticObject : public IMoveable
{
public:
	Vector getPosition()
	{
		throw std::runtime_error("static object");
	}
	void setPosition(const Vector& pos)
	{
		throw std::runtime_error("static object");
	}
	Vector getVelocity()
	{
		throw std::runtime_error("static object");
	}
private:
	Vector _velocity, _position;
};
