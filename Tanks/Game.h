#pragma once
#include "Body.h"
#include <SFML\Graphics.hpp>
#include "KeyboardHandler.h"

class Game
{
public:
	Game(void);
	~Game(void);
private:
	bool isRunning;
	void gameLoop();
	sf::RenderWindow window;
};

