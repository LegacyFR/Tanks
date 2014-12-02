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
	window.setFramerateLimit(60);
	
	sf::Clock fpsclock;

	while(window.isOpen() != false)
	{
		sf::Event event;
		while(window.pollEvent(event) != event.Closed)
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

			if(event.KeyPressed)
					keyboard.handleKey(event.key.code, player);

			std::cout << "rotation is "<< player.getTank().getRotation() << " degs" << std::endl;

			//if(fpsclock.getElapsedTime().asMicroseconds() == 16)
			window.clear();
			window.draw(player.getTank());
			window.display();
			

			

		
		//check input


		//check AI

		//check Collisions

		//check win

		//render

		//sleep ?
	}
		
		
	

		
}