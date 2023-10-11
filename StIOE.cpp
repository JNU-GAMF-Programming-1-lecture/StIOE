#include <iostream>

int main()
{
	std::cout << "Enter a positive number: ";
	int n;
	std::cin >> n;
	if (n < 0)
		std::cerr << "The number is not positive!";
	else
		std::cout << sqrt(n);
	system("pause");
	return 0;
}
