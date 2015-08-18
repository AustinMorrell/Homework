#include <iostream>

int y;
int x;


int main() {
	std::cin >> x;
	// ternary operator//
	(x == 0) ? (y = 0) : (y = 10 / x);
	

	std::cout << y << std::endl;
	system("pause");
	return 0;
}