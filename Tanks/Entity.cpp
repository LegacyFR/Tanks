#include "Entity.h"

Entity::Entity(void)
{
	posX = 100;
	posY = 100;
}

Entity::Entity(int newPosX, int newPosY)
{
}


Entity::~Entity(void)
{
}

int Entity::getPosX()
{
	return posX;
}

void Entity::setPosX(int newPosX)
{
	posX = newPosX;
}

int Entity::getPosY()
{
	return posY;
}

void Entity::setPosY(int newPosY)
{
	posX = newPosY;
}

