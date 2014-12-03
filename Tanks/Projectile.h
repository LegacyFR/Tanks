#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include "Turret.h"

class Projectile
{
public:
	Projectile(void);
	~Projectile(void);

	void stickTurret(Turret);
	void Shot();
	sf::Sprite getProjectile();

private:
	sf::Texture img;
	sf::Sprite projectile;
	int pSpeed;
};