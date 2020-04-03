#include "board.h"

void Board::DisplayBoard()
{
	system ("CLS");
	for (int i = 0; i < WIDTH; i++)
	{

		if(i % 40 == 0)
			cout << endl;
		if(	me.GetX() == i)
			cout << me.GetSprite();
		if(	enemy1.GetX() == i)
			cout << enemy1.GetSprite();
		if( enemy2.GetX() == i)
			cout << enemy2.GetSprite();
		if( candy.GetX() == i)
			cout << candy.GetSprite();
		if(	me.GetX() != i 		&&
				enemy2.GetX() != i 	&&
				enemy1.GetX() != i	&&
				candy.GetX() != i)
		{
			cout << board[i];
		}
	}
}


void Board::DisplayWin()
{
	score++;
	system("CLS");

	cout << "                                         \n";
	cout <<	" #  #  ##  #  #   #     # ##### #   #    \n";
	cout << "  ##  #  # #  #   #     #   #   ##  #    \n";
	cout << "  #   #  # #  #   #  #  #   #   # # #    \n";
	cout <<	"  #   #  # #  #    # # #    #   #  ##    \n";
	cout <<	"  #    ##   ##      # #   ##### #   #    \n";
	cout << "                                         \n";
	cout << "Your score is " << score << "\n";
	cout << "Would you like to play again?(y or n)    \n";

}

void Board::DisplayScore()
{
	cout << "\n                SCORE: " << score;

}

void Board::DisplayLoss()
{
	score = 0;
	system("CLS");
	cout << "                                           \n";
	cout <<	" #  #  ##  #  #   #    ##   ##  ###        \n";
	cout << "  ##  #  # #  #   #   #  # #    #          \n";
	cout << "  #   #  # #  #   #   #  #  ##  ###        \n";
	cout <<	"  #   #  # #  #   #   #  #    # #          \n";
	cout <<	"  #    ##   ##    ###  ##   ##  ###        \n";
	cout << "                                           \n";
	cout << "Your score is " << score << "\n";
	cout << "Would you like to play again?(y or n)      \n";
}

void Board::WatchOutFlicker()
{
	for(int i = 0; i < 10; i++)
	{
		system("CLS");
		WatchOut();
		system("CLS");
		WatchOutBlank();
	}
}
void Board::WatchOut()
{
	cout << "]]]]_###$#######$$$]]]]    \n";
	cout << "]]]###]]]///######$$]]]    \n";
	cout <<	"]]##]]]]]]///######$$]]    \n";
	cout <<	"]##____]]]____#####$$]]    \n";
	cout <<	"]##{# #}]]{# #}#######]    \n";
	cout <<	"]##]]]]]]]/////#####$$]    \n";
	cout <<	"]##]]]*__*/////#####$$]    \n";
	cout <<	"]#]###_#_#_###]#/####$]    \n";
	cout <<	"]#]###~#~#~#]#~~/#####]    \n";
	cout <<	"]#]~_#_#_#_~////#####$]    \n";
	cout <<	"]####]]]]]]/$$#######$]    \n";
	cout <<	"]$###]____////########]    \n";
	cout <<	"]$$##]$###############]    \n";
}

void Board::WatchOutBlank()
{
	cout << "[[[[_   *       ***[[[[    \n";
	cout << "[[[   [[[)))      **[[[    \n";
	cout <<	"[[  [[[[[[)))      **[[    \n";
	cout <<	"[  ____[[[____     **[[    \n";
	cout <<	"[  { # }[[{ # }       [    \n";
	cout <<	"[  [[[[[[[)))))     **[    \n";
	cout <<	"[  [[[*##*)))))     **[    \n";
	cout <<	"[ [   # # #   [ )    *[    \n";
	cout <<	"[ [   ~ ~ ~ [ ~~)     [    \n";
	cout <<	"[ [~_ # # #~))))     *[    \n";
	cout <<	"[    [[[[[[)**       *[    \n";
	cout <<	"[*   ]____))))        [    \n";
	cout <<	"[**  ]*               [    \n";
}


void Board::CircleAnimation()
{

		CircleFrame1();
		CircleFrame2();
		CircleFrame3();
		CircleFrame4();
		CircleFrame5();
		CircleFrame6();
		CircleFrame7();
		CircleFrame8();
		CircleFrame7();
		CircleFrame6();
		CircleFrame5();
		CircleFrame4();
		CircleFrame3();
		CircleFrame2();

	CircleFrame1();
	CircleFrame2();
	CircleFrame3();
	CircleFrame4();
	CircleFrame5();
	CircleFrame6();
	CircleFrame9();
	CircleFrame10();
	CircleFrame11();
	CircleFrame12();
	CircleFrame13();
	CircleFrame12();
	CircleFrame11();
	CircleFrame10();
	CircleFrame11();
	CircleFrame12();
	CircleFrame13();
	CircleFrame12();
	CircleFrame11();
	CircleFrame12();
	CircleFrame13();
	CircleFrame12();
	CircleFrame13();
	CircleFrame13();
	CircleFrame13();
	CircleFrame13();
	CircleFrame13();
	CircleFrame13();
	CircleFrame13();
	CircleFrame13();
	CircleFrame13();
	CircleFrame13();
	CircleFrame13();
	CircleFrame13();
}

void Board::CircleFrame1()
{
	system("CLS");
	cout << "     ######     \n";
	cout << "  ###      ###  \n";
	cout << " #            # \n";
	cout << "#              #\n";
	cout << "#              #\n";
	cout << " #            # \n";
	cout << "  ###      ###  \n";
	cout << "     ######     \n";
}

void Board::CircleFrame2()
{
	system("CLS");
	cout << "     //////     \n";
	cout << "  ///******///  \n";
	cout << " /***      ***/ \n";
	cout << "/*            */\n";
	cout << "/*            */\n";
	cout << " /***      ***/ \n";
	cout << "  ///******///  \n";
	cout << "     //////     \n";
}
void Board::CircleFrame3()
{
	system("CLS");
	cout << "                \n";
	cout << "     ******     \n";
	cout << "   **//////**   \n";
	cout << "  */        /*  \n";
	cout << "  */        /*  \n";
	cout << "   **//////**   \n";
	cout << "     ******     \n";
	cout << "                \n";
}
void Board::CircleFrame4()
{
	system("CLS");
	cout << "                \n";
	cout << "                \n";
	cout << "     *####*     \n";
	cout << "   *##    ##*   \n";
	cout << "   *        *   \n";
	cout << "   *##    ##*   \n";
	cout << "     *####*     \n";
	cout << "                \n";
}

void Board::CircleFrame5()
{
	system("CLS");
	cout << "                \n";
	cout << "                \n";
	cout << "       __       \n";
	cout << "     *####*     \n";
	cout << "    {#    #}    \n";
	cout << "     \"####\"     \n";
	cout << "       ""       \n";
	cout << "                \n";
}
void Board::CircleFrame6()
{
	system("CLS");
	cout << "                \n";
	cout << "                \n";
	cout << "                \n";
	cout << "       ,,       \n";
	cout << "     {#  #}     \n";
	cout << "      \''/      \n";
	cout << "                \n";
	cout << "                \n";
}
void Board::CircleFrame7()
{
	system("CLS");
	cout << "                \n";
	cout << "                \n";
	cout << "                \n";
	cout << "      __        \n";
	cout << "     {##}       \n";
	cout << "      ``        \n";
	cout << "                \n";
	cout << "                \n";
}
void Board::CircleFrame8()
{
	system("CLS");
	cout << "                \n";
	cout << "                \n";
	cout << "                \n";
	cout << "                \n";
	cout << "      ##        \n";
	cout << "                \n";
	cout << "                \n";
	cout << "                \n";
}



void Board::CircleFrame13()
{
	system("CLS");
	cout << "     ######     \n";
	cout << "  ###      ###  \n";
	cout << " #   ^    ^   # \n";
	cout << "#    O    O    #\n";
	cout << "#  <   **   >  #\n";
	cout << " #  ########  # \n";
	cout << "  ### **** ###  \n";
	cout << "     ######     \n";
}

void Board::CircleFrame12()
{
	system("CLS");
	cout << "     //////     \n";
	cout << "  ///******///  \n";
	cout << " /***      ***/ \n";
	cout << "/*   ~~  ~~   */\n";
	cout << "/*     **     */\n";
	cout << " /*** **** ***/ \n";
	cout << "  ///******///  \n";
	cout << "     //////     \n";
}
void Board::CircleFrame11()
{
	system("CLS");
	cout << "                \n";
	cout << "     ******     \n";
	cout << "   **//////**   \n";
	cout << "  */  _  _  /*  \n";
	cout << "  */   __   /*  \n";
	cout << "   **//////**   \n";
	cout << "     ******     \n";
	cout << "                \n";
}
void Board::CircleFrame10()
{
	system("CLS");
	cout << "                \n";
	cout << "                \n";
	cout << "     *####*     \n";
	cout << "   *##    ##*   \n";
	cout << "   *  -  -  *   \n";
	cout << "   *## -- ##*   \n";
	cout << "     *####*     \n";
	cout << "                \n";
}

void Board::CircleFrame9()
{
	system("CLS");
	cout << "                \n";
	cout << "                \n";
	cout << "       __       \n";
	cout << "     *####*     \n";
	cout << "    {# -- #}    \n";
	cout << "     \"####\"     \n";
	cout << "       ""       \n";
	cout << "                \n";
}
