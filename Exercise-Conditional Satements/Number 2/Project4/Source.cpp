#include <iostream>

int numb1;
int numb2;

int main() {

	std::cout << "Give me two numbers please." << std::endl;
	std::cin >> numb1;
	std::cin >> numb2;
	if (numb1 > numb2)
		std::cout << numb1 << std::endl;
	else
		std::cout << numb2 << std::endl;

	system("pause");
	return 0;
}