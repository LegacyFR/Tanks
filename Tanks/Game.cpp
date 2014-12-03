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
	Projectile player_projectile = Projectile();
	KeyboardHandler keyboard = KeyboardHandler();

	sf::RenderWindow window(sf::VideoMode(800,600),"Tanks 0.01");
	window.setFramerateLimit(60);

	std::cout << "Deplacement : Z,S,Q,D ou Haut, Bas, Gauche, Droite." << std::endl;
	std::cout << "Tourelle : A ( tourner a gauche ), E ( tourner a droite )" << std::endl;
	std::cout << "Tirer : Espace" << std::endl;

	while(window.isOpen() )
	{			
		sf::Event event;

		while(window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Mouvement Body
	if(sf::Keyboard::isKeyPressed( sf::Keyboard::Up)|| sf::Keyboard::isKeyPressed(sf::Keyboard::Z) )
	{
		player.moveUp();
		player_turret.stickBody(player);
		player_projectile.stickTurret(player_turret);
	}
	if(sf::Keyboard::isKeyPressed (sf::Keyboard::Left)|| sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
		player.moveLeft();

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)|| sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		player.moveRight();

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)|| sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		player.moveDown();
		player_turret.stickBody(player);
		player_projectile.stickTurret(player_turret);
	}
		// Mouvement Turret
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		player_turret.turnLeft();
		player_projectile.stickTurret(player_turret);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::E))
	{
		player_turret.turnRight();
		player_projectile.stickTurret(player_turret);
	}

		// Tir
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		player_projectile.Shot();
	}	
		//if(event.type == sf::Event::KeyPressed)
		//	keyboard.handleKey(event.key.code, player);

			window.draw(player.getTank());
			window.draw(player_projectile.getProjectile());
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