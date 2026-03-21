#include <iostream>

// Asks the user to enter three values and then print those values as a sentence.
int main()
{
    std::cout << "Enter three numbers: " << '\n';

    int x{};
    int y{};
    int z{};
    std::cin >> x >> y >> z;

    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";

    return 0;
}