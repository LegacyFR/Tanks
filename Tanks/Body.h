#pragma once
#include <SFML\Graphics.hpp>
#define PI 3.14159265

class Body
{
public:
	Body(void);
	~Body(void);

	void moveUp();
	void moveLeft();
	void moveRight();
	void moveDown();
	sf::Sprite getTank();

private:
	sf::Texture img;
	sf::Sprite tank;
	float rotSpeed;
	float fwdSpeed;
	float bwdSpeed;
	float x, y;
	
};

