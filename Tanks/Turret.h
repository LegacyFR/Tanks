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
	void Shot();
	sf::Sprite getTurret();

private:
	sf::Texture img;
	sf::Sprite turret;
	float rotSpeed;
	float x, y;
	
};