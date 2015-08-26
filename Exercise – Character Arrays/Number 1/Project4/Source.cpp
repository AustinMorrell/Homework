#include <iostream>
#include <string>

int main()
{
	std::string name0;

	std::cout << "What is your name?" << std::endl;
	std::getline(std::cin, name0);
	std::cout << "Your name is " << name0 << std::endl;
	system("pause");
	return 0;
}