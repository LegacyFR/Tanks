#include "Turret.h"

Turret::Turret(void)
{
	if(!t_turret.loadFromFile("turret6464.png"))
	{
		//trigger error
	}
	else
	{
		t_turret.setSmooth(true);
		turret.setTexture(t_turret);
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


sf::Sprite Turret::getTurret()
{
	return turret;
}