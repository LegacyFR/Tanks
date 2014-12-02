#pragma once
#include "Entity.h"
#include <SFML\Graphics.hpp>

class KeyboardHandler
{
public:
	KeyboardHandler(void);
	~KeyboardHandler(void);
	void handleKey(sf::Keyboard::Key, Entity&);

};
