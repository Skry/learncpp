#include <climits> // for CHAR_BIT
#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>

int main() {
  std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

  std::cout << std::left; // left justify output

  std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
  std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
  std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
  std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
  std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
  std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
  std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
  std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
  std::cout << std::setw(16) << "long double:" << sizeof(long double)
            << " bytes\n";

  std::cout << std::boolalpha; // print bool as true or false rather than 1 or 0
  std::cout << "float: " << std::numeric_limits<float>::is_iec559 << '\n';
  std::cout << "double: " << std::numeric_limits<double>::is_iec559 << '\n';
  std::cout << "long double: " << std::numeric_limits<long double>::is_iec559
            << '\n';

  double zero{0.0};

  double posinf{5.0 / zero}; // positive infinity
  std::cout << posinf << '\n';

  double neginf{-5.0 / zero}; // negative infinity
  std::cout << neginf << '\n';

  double z1{0.0 / posinf}; // positive zero
  std::cout << z1 << '\n';

  double z2{-0.0 / posinf}; // negative zero
  std::cout << z2 << '\n';

  double nan{zero / zero}; // not a number (mathematically invalid)
  std::cout << nan << '\n';

  std::cout << true << '\n';
  std::cout << false << '\n';

  std::cout << std::boolalpha; // print bools as true or false

  std::cout << true << '\n';
  std::cout << false << '\n';

  return 0;
}