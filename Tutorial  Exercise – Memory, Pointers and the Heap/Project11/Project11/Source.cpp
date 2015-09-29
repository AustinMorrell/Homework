#include <iostream>
#include <string>
using namespace std;

//1.
/*int main()
{
	char c = 'T', d = 'S';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;

	p3 = &d;
	cout << "*p3 = " << *p3 << endl; // (1)
	p3 = p1;
	cout << "*p3 = " << *p3; // (2)
	cout << ", p3 = " << p3 << endl; // (3)
	*p1 = *p2;
	cout << "*p1 = " << *p1; // (4)
	cout << ", p1 = " << p1 << endl; // (5)
	system("pause");
}*/

//2.


//6A. 
char word[4] = { 'A','B','C','D'};

void RevString(char* word)
{
	int len = strlen(word);
	char temp;
	for (int i = 0; i < len / 2; i++)
	{
		temp = word[i];
		word[i] = word[len - i - 1];
		word[len - i - 1] = temp;
	}
}

int main()
{
	cout << word << endl;
	RevString(word);
	cout << word << endl;
	system("pause");
}

//6B.
/*void CountEven(int* array, int array_len)
{

}

int main()
{
	CountEven();
	system("pause");
}*/