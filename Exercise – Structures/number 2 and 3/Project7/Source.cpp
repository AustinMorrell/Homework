#include <iostream>
#include <string>
using namespace std;
int choice1;
int numb;

struct Player
{
	string name;
	int health;
	int str;
	int mana;
	int xPose;
	int yPose;
	int velocity;
	string yolo;
};
void CreatePlayer(Player Shadow)
{
	
	if (choice1 == 1)
	{
		Shadow.yolo = "Mage";
		Shadow.health = 100;
		Shadow.str = 10;
		Shadow.mana = 50;
	}
	else if (choice1 == 2)
	{
		Shadow.yolo = "Warrior";
		Shadow.health = 200;
		Shadow.str = 50;
		Shadow.mana = 10;
	}
	else if (choice1 == 3)
	{
		Shadow.yolo = "Rouge";
		Shadow.health = 150;
		Shadow.str = 25;
		Shadow.mana = 25;
	}

	Shadow.xPose = 0;
	Shadow.yPose = 0;
	Shadow.velocity = 0;
}

int main()
{
	Player Shadow;
	for (numb = 0; numb < 5; numb++)
	{
		cout << "What is your name?\n";
		getline(cin, Shadow.name);
		cout << "What class would you like to be?\n1.Mage\n2.Warrior\n3.Rouge\n";
		cin >> choice1;
		CreatePlayer(Shadow);
		cout << "\n----------------------------------------------\n";
		cout << "Name: " << Shadow.name << "\n" << "Class: " << Shadow.yolo << "\n";
		cout << "HP: " << Shadow.health << "        Str: " << Shadow.str << "         Mana: " << Shadow.mana << "\n";
		cout << "Location: (" << Shadow.xPose << "," << Shadow.yPose <<
			")         Velocity: " << Shadow.velocity << "\n\n";
	}
	system("pause");
}