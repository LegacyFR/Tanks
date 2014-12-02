#include "Game.h"


Game::Game(void)
{
	gameLoop();
}


Game::~Game(void)
{
}

void Game::gameLoop()
{
	Body player = Body();
	KeyboardHandler keyboard = KeyboardHandler();
	sf::RenderWindow window(sf::VideoMode(800,600),"Tanks 0.01");

	while(window.isOpen() != false)
	{
		sf::Event event;
		while(window.pollEvent(event) != event.Closed)
		{
			if (event.type == sf::Event::Closed)
				window.close();

			window.clear();
			window.draw(player.getTank());
			window.display();

			if(event.KeyPressed)
				keyboard.handleKey(event.key.code, player);

		}
		//check input


		//check AI

		//check Collisions

		//check win

		//render

		//sleep ?
	}
		
		
	

		
}