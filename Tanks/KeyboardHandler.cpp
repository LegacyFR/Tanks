#include "KeyboardHandler.h"

KeyboardHandler::KeyboardHandler(void)
{
}


KeyboardHandler::~KeyboardHandler(void)
{
}

void KeyboardHandler::handleKey(sf::Keyboard::Key keyPressed, Entity& focusedObj)
{
	if(keyPressed == sf::Keyboard::Up)
		focusedObj.moveUp();

	if(keyPressed == sf::Keyboard::Left)
		focusedObj.moveLeft();

	if(keyPressed == sf::Keyboard::Right)
		focusedObj.moveRight();

	if(keyPressed == sf::Keyboard::Down)
		focusedObj.moveDown();
}