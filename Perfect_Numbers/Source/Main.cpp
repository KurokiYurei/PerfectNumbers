#include <iostream>
#include "Main.h"

void Title()
{
	std::cout << "\t\t[======================================]\n";
	std::cout << "\t\t\tPerfect Numbers Machine\n";
	std::cout << "\t\t[======================================]\n";

	std::cout << "\nWe are going to display the first four perfect numbers:\n\n";
}

void Perfect_Numbers()
{
	int prime, result;
	int level = 7;

	for (int n = 1; n <= level; n++)
	{
		prime = pow(2, n) - 1;
		//result = pow(2, n - 1) * (pow(2, n) - 1);
		result = pow(2, n - 1) * prime;

		if (prime % n == 1)
		{
			std::cout << "n = " << n << ": " << result << "\n";
			continue;
		}
	}
}

int main()
{
	Title();

	Perfect_Numbers();
}