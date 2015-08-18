#include <iostream>

int main() {
	int mounth;
	std::cout << "Give me the month of the year." << std::endl;
	std::cin >> mounth;
	//maybe my problem is I need '==' insted of '='//
	if (mounth == 1)
		std::cout << "January 31" << std::endl;
	else if (mounth == 2)
		std::cout << "February 28" << std::endl;
	else if (mounth == 3)
		std::cout << "March 31" << std::endl;
	else if (mounth == 4)
		std::cout << "April 30" << std::endl;
	else if (mounth == 5)
		std::cout << "May 31" << std::endl;
	else if (mounth == 6)
		std::cout << "June 30" << std::endl;
	else if (mounth == 7)
		std::cout << "July 31" << std::endl;
	else if (mounth == 8)
		std::cout << "August 31" << std::endl;
	else if (mounth == 9)
		std::cout << "September 30" << std::endl;
	else if (mounth == 10)
		std::cout << "October 31" << std::endl;
	else if (mounth == 11)
		std::cout << "November 30" << std::endl;
	else if (mounth == 12)
		std::cout << "December 31" << std::endl;
	else
		std::cout << "Error, not a mounth boy. T___T" << std::endl;
	system("pause");
	return 0;
}