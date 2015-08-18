#include <iostream>



int main()
{
	int x;
	int y = 100;
	int ynumb;
	std::cout << "What is the magic number?" << std::endl;
	std::cin >> ynumb;
	//i want to assign y to ynumb minus 50
	 y = ynumb - 50;

	if (y == 0) {
		x = 100;

		std::cout << x << "You were right!" << std::endl;

		system("pause");

	}
	return 0;
}