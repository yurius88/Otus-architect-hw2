#include <gtest/gtest.h>
#include "MockMoveableObject.h"
#include "MockStaticObject.h"
#include "MockRotableObject.h"
#include "MoveCommand.h"
#include "RotateCommand.h"

// Для объекта, находящегося в точке (12, 5) 
// и движущегося со скоростью (-7, 3) 
// движение меняет положение объекта на (5, 8)
TEST(Moveable, CheckPositionMoveableObject)
{
	MockMoveableObject obj(Vector(12,5), Vector(-7,3));
	MoveCommand moveCommand(&obj);
	moveCommand.Execute();

	EXPECT_EQ(obj.getPosition(), Vector(5,8));  
}

// Попытка сдвинуть объект, у которого невозможно прочитать положение в пространстве,
// приводит к ошибке 
TEST(Moveable, CheckGetPositionStaticObject)
{
	ASSERT_THROW(
		{
			MockStaticObject staticObject;
			staticObject.getPosition();
		},
		std::runtime_error);
}

// Попытка сдвинуть объект, у которого невозможно прочитать значение мгновенной скорости,
// приводит к ошибке 
TEST(Moveable, CheckGetVelocityStaticObject)
{
	ASSERT_THROW(
		{
			MockStaticObject staticObject;
			staticObject.getVelocity();			
		},
		std::runtime_error);
}

// Попытка сдвинуть объект, у которого невозможно изменить положение в пространстве,
// приводит к ошибке 
TEST(Moveable, CheckSetPositionStaticObject)
{
	ASSERT_THROW(
		{
			MockStaticObject staticObject;
			staticObject.setPosition(Vector(1,1));
		},
		std::runtime_error);
}

// проверка текущего направления
TEST(Moveable, CheckGetDirectionRotableObject)
{
	MockRotableObject obj(10, 10, 8);	

	EXPECT_EQ(obj.getDirection(), 10);
}

// проверка текущей скорости поворота
TEST(Moveable, CheckGetAngularVelocityRotableObject)
{
	MockRotableObject obj(10, 10, 8);

	EXPECT_EQ(obj.getAngularVelocity(), 10);
}

// проверка максимального количества направлений
TEST(Moveable, CheckGetMaxDirectionsRotableObject)
{
	MockRotableObject obj(10, 10, 8);

	EXPECT_EQ(obj.getMaxDirections(), 8);
}

// объект с направлением 10, угловой скоростью 10 и 
// максимальным количеством направлений равным 8 будет иметь направление 4
TEST(Moveable, CheckDirectionRotableObject)
{
	MockRotableObject obj(10, 10, 8);
	RotateCommand rotateCommand(&obj);
	rotateCommand.Execute();

	EXPECT_EQ(obj.getDirection(), 4);
}