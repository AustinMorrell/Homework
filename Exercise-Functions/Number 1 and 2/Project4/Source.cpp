#include <iostream>
using namespace std;
/*
1. 1122321
*/
int answer;
int a;
int b;

void returningFunction(int smallNumb)
{
	if (a < b)
		answer = a;
	else
		answer = b;
}
	int main()
	{
		cout << "Give me two numbers and I will give you the smaller one.";
		cin >> a;
		cin >> b;
		returningFunction(answer);
		cout << answer;
		system("pause");
	}
