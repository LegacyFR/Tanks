#pragma once
#include "Body.h"
#include "Turret.h"
#include "Projectile.h"
#include <SFML\Graphics.hpp>

class KeyboardHandler
{
public:
	KeyboardHandler(void);
	~KeyboardHandler(void);
	void handleKey( Body&,Turret&,Projectile&,sf::RenderWindow&);

};
