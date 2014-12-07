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

		if(event.KeyPressed)
		{
			keyboard.handleKey(player,player_turret,player_projectile,window);
		}

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