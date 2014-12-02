#pragma once
#include "entity.h"
#include <SFML\Graphics.hpp>

class Body :
	public Entity
{
public:
	Body(void);
	~Body(void);

	virtual void moveUp();
	virtual void moveLeft();
	virtual void moveRight();
	virtual void moveDown();
	void rotate(float);
	sf::Sprite getTank();

private:
	sf::Sprite tank;
	float rotSpeed;
	float fwdSpeed;
	float bwdSpeed;
	
};

