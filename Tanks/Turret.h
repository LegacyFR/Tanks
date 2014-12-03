#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include "Body.h"

class Turret
{
public:
	Turret(void);
	~Turret(void);

	void turnLeft();
	void turnRight();
	void stickBody(Body);

	sf::Sprite getTurret();

private:
	sf::Texture t_turret;
	sf::Sprite turret;
	float rotSpeed;
};