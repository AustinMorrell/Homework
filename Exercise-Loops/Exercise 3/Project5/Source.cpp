#include <iostream>

int Sum;

int main()
{
	int Damage;
	for (Damage = 0; Damage <= 1000; Damage++)
	{
		if ((Damage % 3 == 0) || (Damage % 5 == 0))
		{
			std::cout << Damage << std::endl;
			Sum += Damage;
		}
		}
	std::cout << "Your sum is " << Sum << std::endl;
	system("pause");
	return 0;
}
