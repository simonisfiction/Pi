/*
 * board.h
 *
 *  Created on: Feb 25, 2020
 *      Author: Dell
 */

#ifndef BOARD_H_
#define BOARD_H_
#include "player.h"
#include "candy.h"
class Board
{
	char *board;
	Player me;
	Player enemy1;
	Player enemy2;
	Prize candy;
	int size;
	int score;
public:
	Board();
	~Board();
	void Initialize();
	void DisplayBoard();
	void MovePlayer(char direction);
	void SetEnemies();
	void SetPrize();
	void MoveEnemy();
	bool CheckWin();
	bool CheckLoss();
	void DisplayWin();
	void DisplayLoss();
	void DisplayScore();
	void WatchOutFlicker();
	void WatchOut();
	void WatchOutBlank();
	int GetScore();

	//Animation
	void CircleFrame1();
	void CircleFrame2();
	void CircleFrame3();
	void CircleFrame4();
	void CircleFrame5();
	void CircleFrame6();
	void CircleFrame7();
	void CircleFrame8();
	void CircleFrame9();
	void CircleFrame10();
	void CircleFrame11();
	void CircleFrame12();
	void CircleFrame13();
	void CircleAnimation();
};

#endif /* BOARD_H_ */
