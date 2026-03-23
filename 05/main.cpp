#include <iostream>

int main() {

  int x{};
  std::cin >> x;

  if (x > 5) {
    std::cout << "La valeur est au dessus de 5" << ".\n";
    return 0;
  }

  std::cout << "La valeur est en dessous de 6" << ".\n";

  return 0;
}