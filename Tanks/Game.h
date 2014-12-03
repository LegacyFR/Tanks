#pragma once
#include "Body.h"
#include "Turret.h"
#include <SFML\Graphics.hpp>
#include <iostream>
#include "KeyboardHandler.h"

class Game
{
public:
	Game(void);
	~Game(void);
private:
	bool isRunning;
	void gameLoop();
};

