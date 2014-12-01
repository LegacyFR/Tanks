#include "Body.h"


Body::Body(void)
{
	rotSpeed = 0.16f;
	fwdSpeed = 5.0f;
	bwdSpeed = 3.0f;
}

Body::~Body(void)
{
}

void Body::moveUp()
{
	
}

void Body::moveLeft()
{
	tank.rotate(tank.getRotation() - 0.16f);
}

void Body::moveRight()
{
	tank.rotate(tank.getRotation() + 0.16f);
}

void Body::moveDown()
{

}

void Body::rotate(float angle)
{
	tank.setRotation(angle);
}