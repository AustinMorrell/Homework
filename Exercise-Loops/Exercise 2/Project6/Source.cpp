#include <iostream>

int main()
{
	int Number;
	for (Number = 0; Number <= 100; Number++)
	{
		if ((Number % 3 == 0) && (Number % 5 == 0))
			std::cout << "FizzBuzz" << std::endl;
		else if (Number % 3 == 0)
			std::cout << "Fizz" << std::endl;
		else if (Number % 5 == 0)
			std::cout << "Buzz" << std::endl;
		else
		std::cout << Number << std::endl;
	}
	system("pause");
	return 0;
}