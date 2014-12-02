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

	while(window.isOpen() )
	{			
		sf::Event event;

		while(window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		if(sf::Keyboard::isKeyPressed( sf::Keyboard::Up))
		player.moveUp();

	if(sf::Keyboard::isKeyPressed (sf::Keyboard::Left))
		player.moveLeft();

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		player.moveRight();

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		player.moveDown();
		
		//if(event.type == sf::Event::KeyPressed)
		//	keyboard.handleKey(event.key.code, player);

			window.draw(player.getTank());
			window.display();
			window.clear();

		//check input

		//check AI

		//check Collisions

		//check win

		//render

		//sleep ?
	}
		
		
	

		
}