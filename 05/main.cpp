#include <iostream>

bool isPrime(int x) {
  if (x == 2) // if user entered 2, the digit is prime
    return true;
  else if (x == 3) // if user entered 3, the digit is prime
    return true;
  else if (x == 5) // if user entered 5, the digit is prime
    return true;
  else if (x == 7) // if user entered 7, the digit is prime
    return true;

  return false; // if the user did not enter 2, 3, 5, 7, the digit must not be
                // prime

  // alternative
  // return x == 2 || x == 3 || x == 5 || x == 7;

  // alternative 2
  /*
    switch (x)
    {
        case 2: if the user entered 2
        case 3: or if the user entered 3
        case 5: or if the user entered 5
        case 7: or if the user entered 7
        return true; // then the digit is prime
    }

    return false; // otherwise the digit must not be prime
  */
}

int getNumber() {
  std::cout << "Enter a value between 0 and 9" << ".\n";
  int x{};
  std::cin >> x;
  return x;
}

int main() {

  int x{getNumber()};

  if (x < 0 || x > 9) {
    x = getNumber();
  }

  if (isPrime(x)) {
    std::cout << "Value is prime" << ".\n";
  } else {
    std::cout << "Value is not prime" << ".\n";
  }

  return 0;
}