#include "player.h"

	Player::Player()
	{
		x = 0;
		y = 0;
		sprite = '&';
	}
	Player::Player(int newX, int newY, char newSprite)
	{
		x = newX;
		y = newY;
		sprite = newSprite;
	}
	Player::Player(char random): x{rand() % WIDTH + 1}, sprite{random} {}


	Player::~Player(){}

	int Player::GetX()
	{
		return x;
	}
	int Player::GetY()
	{
		return y;
	}
	char Player::GetSprite()
	{
		return sprite;
	}
	void Player::SetX(int newX)
	{
		x = newX;
	}
	void Player::SetY(int newY)
	{
		y = newY;
	}
	void Player::SetSprite(char newSprite)
	{
		sprite = newSprite;
	}
	void Player::UpdateX(char direction)
	{
		if(	(x + 40 < WIDTH || x - 40 >= 0) &&
			(x + 2  < WIDTH || x - 2  >= 0))
		{
			if(direction == 'w')
			{
				x -= 40;
			}
			if(direction == 's')
			{
				x += 40;
			}
			if(direction == 'a')
			{
				x -= 2;
			}
			if(direction == 'd')
			{
				x += 2;
			}
		}
	}
	void Player::UpdateY(int addY)
	{
		if(y + addY < WIDTH || y + addY >= 0)
		{
			y += addY;
		}
	}
	void Player::EnemyUpdateXFast(Player player)
	{
		int xDistance;

		xDistance = (player.x % 40) - (this -> x % 40);
		if(xDistance < 0)
			this -> x -= 2;

		else
			this -> x += 2;

		if(this -> x < player.x - 40)
		{
			this -> x += 40;
		}
		 if(this -> x > player.x + 40)
		{
			this -> x -= 40;
		}
	}

	void Player::EnemyUpdateXSlow(Player player)
	{
		int xDistance;
		int fastSlow = rand() % 2;
		xDistance = (player.x % 40) - (this -> x % 40);

		if(fastSlow){
			if(xDistance < 0)
				this -> x -= 2;

			else
				this -> x += 2;
		}
		else
		{
			if(this -> x < player.x - 40)
			{
				this -> x += 40;
			}
			if(this -> x > player.x + 40)
			{
				this -> x -= 40;
			}
		}
	}

	void Player::EnemyKnightMove(Player player)
	{
		int xDistance;
			int fastSlow = rand() % 2;
			xDistance = (player.x % 40) - (this -> x % 40);

		if(fastSlow){
			if(xDistance < 0)
				this -> x -= 44;

			else
				this -> x +=44;
		}
		else
		{
			if(this -> x < player.x - 40)
			{
				this -> x += 42;
			}
			if(this -> x > player.x + 40)
			{
				this -> x -= 42;
			}
		}
	}
