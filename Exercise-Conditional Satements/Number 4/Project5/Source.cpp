#include <iostream>

int main() {
	int choice;
	//uninitalized local variable 'choice' used//
	switch (choice) {

	case 1: std::cout << "1";
	case 2: std::cout << "2 or 3";
	case 3: std::cout << "2 or 3";
	case 4: std::cout << "4";
		break;
	case 5: std::cout << "Invalid";
		system("pause");
		return 0;
	}


}