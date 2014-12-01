#pragma once
class Entity
{
public:
	Entity();
	Entity(int, int);
	~Entity(void);

	int getPosX();
	void setPosX(int);
	int getPosY();
	void setPosY(int);

	virtual void moveUp() = 0;
	virtual void moveLeft() = 0;
	virtual void moveRight() = 0;
	virtual void moveDown() = 0;

private:
	

	int posX;
	int posY;

};

