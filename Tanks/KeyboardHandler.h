#pragma once
#include <SFML\Window.hpp>
#include "Body.h"

class KeyboardHandler
{
public:
	KeyboardHandler(void);
	~KeyboardHandler(void);
	void handleKey(sf::Keyboard::Key, Entity&);

};

