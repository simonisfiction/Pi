#include "board.h"

int main() {
	//Initializations & Declarations
	Board board;
	bool game = true;
	bool win = false;
	bool programLoop = true;
	int wins = 0;
	int highScore;
	char playAgain;


	string highScoreName;
	ifstream inFile;
	inFile.open("highscore.txt");

	getline(inFile,highScoreName);
	inFile >> highScore;
	inFile.ignore(10000, '\n');

	char movement;
	srand(time(NULL));

	//Setup
	board.SetPrize();
	board.SetEnemies();
	board.DisplayBoard();
	//GameLoop
	while(programLoop)
	{
		while (game & !win)
		{

			cin.get(movement);
			board.MovePlayer(movement);
			board.MoveEnemy();
			board.DisplayBoard();
			board.DisplayScore();
			game = board.CheckLoss();
			if(!game)
				board.WatchOutFlicker();
			win = board.CheckWin();

		}
		if(win & game)
		{
			board.CircleAnimation();
			board.DisplayWin();
		}
		else
		{
			board.DisplayLoss();
			wins = 0;
		}
		cin >> playAgain;
//		cin.get(playAgain);
		if(playAgain == 'y')
		{

			if(board.GetScore() > highScore)
			{
				ofstream oFile;
				oFile.open("highscore.txt");
				cout << "You got the high score!\n";
				cout << "Enter your name";
				getline(cin, highScoreName);

				oFile << highScoreName << '\n';
				oFile << board.GetScore();
				oFile.close();
			}

			game = true;
			win = false;

			board.SetEnemies();
			board.SetPrize();
		}

		else if(playAgain == 'n')
			programLoop = false;
	}


	return 0;
}
