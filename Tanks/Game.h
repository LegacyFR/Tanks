#pragma once
class Game
{
public:
	Game(void);
	~Game(void);
private:
	bool isRunning;
	void gameLoop();
};

