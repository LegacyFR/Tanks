#pragma once
#include "Body.h"
#include <SFML\Graphics.hpp>

class KeyboardHandler
{
public:
	KeyboardHandler(void);
	~KeyboardHandler(void);
	void handleKey(sf::Keyboard::Key, Body&);

};
