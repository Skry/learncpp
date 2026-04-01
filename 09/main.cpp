#include <iostream>
#include <string>

std::string getQuantityPhrase(int x) {
  return x < 0    ? "negative"
         : x == 0 ? "no"
         : x == 1 ? "a single"
         : x == 2 ? "a couple of"
         : x == 3 ? "a few"
                  : "many";
}

std::string getApplesPluralized(int x) { return x > 1 ? "apples" : "apple"; }

int main() {
  constexpr int maryApples{3};
  std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' '
            << getApplesPluralized(maryApples) << ".\n";

  std::cout << "How many apples do you have? ";
  int numApples{};
  std::cin >> numApples;

  std::cout << "You have " << getQuantityPhrase(numApples) << ' '
            << getApplesPluralized(numApples) << ".\n";

  return 0;
}