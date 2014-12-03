#include "Projectile.h"

Projectile::Projectile(void)
{
	if(!img.loadFromFile("projectile48.png"))
	{
		//trigger error
	}
	else
	{
		img.setSmooth(true);
		projectile.setTexture(img);
	}
	projectile.setOrigin(1,6);
	projectile.setPosition(100,100);
	pSpeed = 10;
}
Projectile::~Projectile(void)
{
}


void Projectile::stickTurret(Turret turret)
{
	projectile.setPosition(turret.getTurret().getPosition().x,turret.getTurret().getPosition().y);
	projectile.setRotation(turret.getTurret().getRotation());
}
void Projectile::Shot()
{
	float rotation = projectile.getRotation();
	float radRotation = rotation * (PI / 180);
	float coord[2] = {0, 0};
    
    if(rotation <= 90)
	{
		if(rotation == 0)
			coord[0] = 0;
		else
			coord[0] = 1;

		coord[1] = -1;
		projectile.move(((sin(radRotation)*coord[0]) * pSpeed), ((cos(radRotation) * coord[1]) * pSpeed));
	}
	else if (rotation <= 180 && rotation > 90)
	{
		coord[0] = 1;
		if(rotation == 90)
			coord[1] = 0;
		else
			coord[1] = 1;
		projectile.move(((sin(radRotation)*coord[0]) * pSpeed), ((-cos(radRotation) * coord[1]) * pSpeed));

	}
	else if (rotation <= 270 && rotation > 180)
	{
		if(rotation == 180)
			coord[0] = 0;
		else
			coord[0] = -1;

		coord[1] = 1;
		projectile.move(((-sin(radRotation)*coord[0]) * pSpeed), ((-cos(radRotation) * coord[1]) * pSpeed));
	}
	else if (rotation <= 360 && rotation > 270)
	{
		coord[0] = -1;
		if(rotation == 180)
			coord[1] = 0;
		else
			coord[1] = -1;
		projectile.move(((-sin(radRotation)*coord[0]) * pSpeed), ((cos(radRotation) * coord[1]) * pSpeed));
	}
}


sf::Sprite Projectile::getProjectile()
{
	return projectile;
}