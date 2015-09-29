////////////////////////////////////////////////////////////////
//Austin Morrell//
//Septemper 9th 2015//
//September 14th 2015//
//Wumpus World Problem//
///////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;


	class Zambie
	{

	public:
		//The constructor must be public.
		//If you do not define the protection level
		//it will default to private
		bool getpo()
		{
			return po;
		}
		Zambie(int, int, bool);
		Zambie();
		int setHP(int);
		bool setpo(bool);
		int gethp()
		{
			return hp;
		}
		int getatk()
		{
			return atk;
		}
	private:
		int hp;
		int atk;
		bool po;

	};

	bool Zambie::setpo(bool yn)
	{
		po = yn;
		return po;
	}

	int Zambie::setHP(int health)
	{
		hp = health;
		return hp;
	}

	Zambie::Zambie()
	{
	
	}

	//this first Zambie before the :: means it's in that scope
	//the second Zambie is the constructor
	Zambie::Zambie(int x, int y, bool z)
	{
		hp = x;
		atk = y;
		po = z;
	}

Zambie zamb[10];

void makeZambies()
{
	for (int h = 0; h < 10; h++)
	{
		zamb[h] = Zambie(rand() % 101, rand() % 101, 0);
	}
}

void DeezzNuttzz()
{
	cout << "We got some zambies today, and they" << endl;
	cout << "like killing each other! Watch them" << endl;
	cout << "go down one by one! In the end there" << endl;
	cout << "will be two winners!" << endl;
	for (int j = 0; j < 10; j++)
	{
		if (zamb[j].getpo() == 0)
		{
			cout << j << "  ";
		}
	}
	cout << endl;
}

void Battle()
{
	int fighter1 = rand() % 10;
	int fighter2 = rand() % 10;
	if (zamb[fighter1].getpo() == 0 && zamb[fighter2].getpo() == 0)
	{
		if (fighter1 != fighter2)
		{

			zamb[fighter2].setHP(zamb[fighter2].gethp() - zamb[fighter1].getatk());
			if (zamb[fighter2].gethp() <= 0)
			{
				zamb[fighter2].setpo(1);
				cout << fighter2 << " died!" << endl;
			}
		}
		else
		{
			Battle();
		}
	}
	else
	{
		Battle();
	}
}

void Winner()
{
	for (int k = 0; k < 10; k++)
	{
		if (zamb[k].getpo() == 0)
		{
			cout << "The winners and must destructive zambies are: #" << k << "!" << endl;
		}
	}
}

int main()
{
	makeZambies();
	for (int i = 0; i <= 10; i++)
	{
		DeezzNuttzz();
		system("pause");
		Battle();
		system("pause");
		system("cls");
	}
	Winner();
	system("pause");
	return 0;
}
