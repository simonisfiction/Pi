
#ifndef CANDY_H_
#define CANDY_H_
#include "player.h"

class Prize
{
	char sprite;
	int x;
public:
	Prize()
{
		sprite = 227;
		int coordinate = rand() % WIDTH +1;
		if((coordinate % 2) != 0)
			coordinate++;
		x = coordinate;
}
	~Prize()
	{

	}
	int GetX()
	{
		return x;
	}
	void SetX(int newX)
	{
		x = newX;
	}
	char GetSprite()
	{
		return sprite;
	}
};




#endif /* CANDY_H_ */
