#include <iostream>
#include <string>

std::string getFullName() {
  std::cout << "Enter your full name:";
  std::string fullName{};
  std::cin >> fullName;

  return fullName;
}

int getAge() {
  std::cout << "Enter your age:";
  int age{};
  std::cin >> age;

  return age;
}

int main() {

  std::string fullName{getFullName()};
  int age{getAge()};

  std::cout << fullName << " " << age << "\n";

  return 0;
}