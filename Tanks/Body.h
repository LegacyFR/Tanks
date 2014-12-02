#pragma once
#include <SFML\Graphics.hpp>

class Body
{
public:
	Body(void);
	~Body(void);

	void moveUp();
	void moveLeft();
	void moveRight();
	void moveDown();
	void rotate(float);
	sf::Sprite getTank();

private:
	sf::Texture img;
	sf::Sprite tank;
	float rotSpeed;
	float fwdSpeed;
	float bwdSpeed;
	
};

