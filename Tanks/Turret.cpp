#include "Turret.h"

Turret::Turret(void)
{
	if(!img.loadFromFile("turret6464.png"))
	{
		//trigger error
	}
	else
	{
		img.setSmooth(true);
		turret.setTexture(img);
	}
	turret.setOrigin(32,49);
	turret.setPosition(100,100);
	rotSpeed = 0.32f;
}
Turret::~Turret(void)
{
}


void Turret::turnLeft()
{
	turret.rotate(- rotSpeed );
}
void Turret::turnRight()
{
	turret.rotate( rotSpeed );
}
void Turret::stickBody(Body body)
{

	sf::Sprite pos = body.getTank();
	turret.setPosition(pos.getPosition().x,pos.getPosition().y);
}
void Turret::Shot()
{
}


sf::Sprite Turret::getTurret()
{
	return turret;
}