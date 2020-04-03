
#ifndef PLAYER_H_
#define PLAYER_H_

#define HEIGHT 800
#define WIDTH 800
#include <iostream>
#include <time.h>
#include <fstream>
#include <string>
using namespace std;

class Player
{
	char sprite;
	int x;
	int y;

public:
	Player();
	Player(int newX, int newY, char newSprite);
	Player(char random);
	~Player();

	int GetX();
	int GetY();
	char GetSprite();
	void SetX(int newX);
	void SetY(int newY);
	void SetSprite(char newSprite);
	void UpdateX(char direction);
	void UpdateY(int addY);
	void EnemyUpdateXFast(Player player);
	void EnemyUpdateXSlow(Player player);
	void EnemyKnightMove(Player player);
};
#endif /* PLAYER_H_ */
