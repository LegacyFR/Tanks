#include "KeyboardHandler.h"

KeyboardHandler::KeyboardHandler(void)
{
}


KeyboardHandler::~KeyboardHandler(void)
{
}

void KeyboardHandler::handleKey(sf::Keyboard::Key keyPressed, Body& focusedObj)
{
	if(sf::Keyboard::isKeyPressed( sf::Keyboard::Up))
		focusedObj.moveUp();

	if(sf::Keyboard::isKeyPressed (sf::Keyboard::Left))
		focusedObj.moveLeft();

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		focusedObj.moveRight();

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		focusedObj.moveDown();
}