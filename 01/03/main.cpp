#include <iostream>

int main()
{
	// récupérer la valeur dans le terminal
	std::cout << "Enter an integer: " << '\n';

	int val{};
	std::cin >> val;

	// calculer le double de la valeur et retourner celle-ci
	std::cout << "Double that number is: " << val * 2 << '\n';
	std::cout << "Triple that number is: " << val * 3 << '\n';

	return 0;
}