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
	Turret player_turret = Turret();
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

		// Mouvement Body
	if(sf::Keyboard::isKeyPressed( sf::Keyboard::Up))
	{
		player.moveUp();
		player_turret.stickBody(player);
	}
	if(sf::Keyboard::isKeyPressed (sf::Keyboard::Left))
		player.moveLeft();

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		player.moveRight();

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		player.moveDown();
		player_turret.stickBody(player);
	}
		// Mouvement Turret
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		player_turret.turnLeft();
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::E))
		player_turret.turnRight();
		
		//if(event.type == sf::Event::KeyPressed)
		//	keyboard.handleKey(event.key.code, player);

			window.draw(player.getTank());
			window.draw(player_turret.getTurret());
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