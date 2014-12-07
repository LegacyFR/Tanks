#include "KeyboardHandler.h"

KeyboardHandler::KeyboardHandler(void)
{
}


KeyboardHandler::~KeyboardHandler(void)
{
}

void KeyboardHandler::handleKey( Body& player, Turret& player_turret, Projectile& player_projectile,sf::RenderWindow& window)
{
		// Déplacement Tank
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
		// Rotation Tourelle
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
		
		sf::Clock shotClock;
		while (shotClock.getElapsedTime().asSeconds() <= 0.5)
		{
			std::cout<<shotClock.getElapsedTime().asSeconds()<<std::endl;
			player_projectile.Shot();
		}

		if (shotClock.getElapsedTime().asSeconds() > 0.5)
		{
			std::cout<<shotClock.getElapsedTime().asSeconds()<<std::endl;
			player_projectile.stickTurret(player_turret);
			shotClock.restart();
		}

	}	
}