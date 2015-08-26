#include <iostream>
using namespace std;
#include <cstdlib>

int WhatEverYouWantBra;
int Number;

int CoinToss()
{
	Number = rand() % 2;
	return Number;
}

int main()
{
	cout << "How many times would you like to flip?\n";
	cin >> WhatEverYouWantBra;

	// =   set left = right
	// ==  is left == right

	for (WhatEverYouWantBra; WhatEverYouWantBra > 0; WhatEverYouWantBra--)
	{
		CoinToss();
		if (Number == 1)
			cout << "Heads\n";
		else
			cout << "Tails\n";
	}
	system("pause");
}