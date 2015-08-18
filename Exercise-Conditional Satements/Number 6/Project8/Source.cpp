#include <iostream>



int main() {

int themaths1;
char themaths2;
int themaths3;
int answer;

	std::cout << "I will do the maths for you. :P" << std::endl;
	std::cin >> themaths1;
	std::cin >> themaths2;
	std::cin >> themaths3;

	if (themaths2 == '-')
	{
		 answer = themaths1 - themaths3;
	}
	else if (themaths2 == '+')
	{
		 answer = themaths1 + themaths3;
	}
	else if (themaths2 == '*')
	{
		 answer = themaths1 * themaths3;
	}
	else if (themaths2 == '/')
	{
		 answer = themaths1 / themaths3;
	}
	else if (themaths2 == '%')
	{
		 answer = themaths1 % themaths3;
	}
	std::cout << "Your answer is: " << answer << std::endl;
	system("pause");



	return 0;
}