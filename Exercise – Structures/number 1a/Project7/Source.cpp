#include <iostream>
#include <string>
using namespace std;

struct Player
{
	string name;
	int health;
	int score;
	int xPose;
	int yPose;
	int velocity;
};

int main()
{
	Player Shadow;

	cout << "What is your name?\n";
	getline(cin, Shadow.name);
	Shadow.health = 500;
	Shadow.score = 0;
	Shadow.xPose = 0;
	Shadow.yPose = 0;
	Shadow.velocity = 0;

	cout << "\n----------------------------------------------\n";
	cout << "Name: " << Shadow.name << "\n" << "Type: Fuck boy\n";
	cout << "HP: " << Shadow.health << "                 Score: " << Shadow.score << "\n";
	cout << "Location: (" << Shadow.xPose << "," << Shadow.yPose << 
		")         Velocity: " << Shadow.velocity << "\n";
	system("pause");
}