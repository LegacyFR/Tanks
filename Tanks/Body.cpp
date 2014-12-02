#include "Body.h"


Body::Body(void)
{
	if(!img.loadFromFile("basetank6464.png"))
	{
		//trigger error
	}
	else
		tank.setTexture(img);

	tank.setOrigin(32,32);
	tank.setPosition(100,100);
	tank.setRotation(45);
	rotSpeed = 0.16f;
	fwdSpeed = 5.0f;
	bwdSpeed = 3.0f;
}

Body::~Body(void)
{

}

void Body::moveUp()
{
	float rotation = tank.getRotation();
	float radRotation = rotation * (PI / 180);
	float coord[2] = {0, 0};
    
    if(rotation < 90)
	{
		if(rotation == 0)
			coord[0] = 0;
		else
			coord[0] = 1;

		coord[1] = -1;
	}
	else if (rotation < 180)
	{
		coord[0] = 1;

		if(rotation == 90)
			coord[1] = 0;
		else
			coord[1] = 1;

		rotation -= 90 * 1;
	}
	else if (rotation < 270)
	{
		if(rotation == 180)
			coord[0] = 0;
		else
			coord[0] = -1;

		coord[1] = 1;
		rotation -= 90 * 2;
	}
	else if (rotation < 360)
	{
		coord[0] = -1;
		if(rotation == 180)
			coord[1] = 0;
		else
			coord[1] = -1;
		rotation -= 90 * 3;
	}
	
	tank.move(((sin(radRotation)*coord[0]) * bwdSpeed), ((cos(radRotation) * coord[1]) * bwdSpeed));

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
	float rotation = tank.getRotation();
	float radRotation = rotation * (PI / 180);
	float coord[2] = {0, 0};
    
    if(rotation < 90)
	{
		coord[0] = 1;
		coord[1] = -1;
	}
	else if (rotation < 180)
	{
		coord[0] = 1;
		coord[1] = 1;
		rotation -= 90 * 1;
	}
	else if (rotation < 270)
	{
		coord[0] = -1;
		coord[1] = 1;
		rotation -= 90 * 2;
	}
	else if (rotation < 360)
	{
		coord[0] = -1;
		coord[1] = -1;
		rotation -= 90 * 3;
	}
	
		tank.move(-((sin(radRotation)*coord[0]) * bwdSpeed), -((cos(radRotation) * coord[1]) * bwdSpeed));

}

void Body::rotate(float angle)
{
	tank.setRotation(angle);
}

sf::Sprite Body::getTank()
{
	return tank;
}