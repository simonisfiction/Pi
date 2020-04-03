#include "board.h"


Board::Board()
{
	board = new char[WIDTH];
	Initialize();
	score = 0;
}
Board::~Board()
{
	delete[]board;
}
void Board::Initialize()
{
	SetEnemies();
	system ("CLS");
	for (int i = 0; i < WIDTH; i++)
	{
		if(i % 2 != 1)
			board[i] = '.';
		else
			board[i] = ' ';
	}
}

void Board::MovePlayer(char direction)
{
	char sprite = rand() %255 + 1;

	me.SetSprite(-37);
	me.UpdateX(direction);

}

void Board::MoveEnemy()
{
	enemy1.EnemyUpdateXSlow(me);
	enemy2.EnemyUpdateXSlow(me);
}

void Board::SetEnemies()
{
	int enemy1x;
	int enemy2x;
	enemy1x = rand() % WIDTH + 1;
	if(enemy1x % 2 != 0)
		enemy1x++;

	enemy2x = rand() % WIDTH + 1;
	if(enemy2x % 2 != 0)
		enemy2x++;

	enemy1.SetX(enemy1x);
	enemy1.SetSprite(-31);

	enemy2.SetX(enemy2x);
	enemy2.SetSprite(-32);
}

void Board::SetPrize()
{
	int coordinate = rand() % WIDTH +1;

	if((coordinate % 2) == 1)
		coordinate++;
	candy.SetX(coordinate);
}


bool Board::CheckLoss()
{
	if(	enemy1.GetX() == me.GetX() + 1	|| enemy2.GetX() == me.GetX() + 1 	||
		enemy1.GetX() == me.GetX() - 1	|| enemy2.GetX() == me.GetX() - 1 	||
		enemy1.GetX() == me.GetX() 		|| enemy2.GetX() == me.GetX() 		||
		enemy1.GetX() == me.GetX() - 40 || enemy2.GetX() == me.GetX() - 40 	||
		enemy1.GetX() == me.GetX() + 40	|| enemy2.GetX() == me.GetX() + 40 	)
	{
		return false;
	}
	else return true;
}

bool Board::CheckWin()
{
	if(	candy.GetX() == me.GetX() + 1	||
		candy.GetX() == me.GetX() - 1	||
		candy.GetX() == me.GetX() 		||
		candy.GetX() == me.GetX() - 40 	||
		candy.GetX() == me.GetX() + 40)
	{
		return true;
	}
	else return false;
}

int Board::GetScore()
{
	return score;
}
