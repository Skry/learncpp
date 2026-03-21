#include "io.hpp"
#include <iostream>
#define DEBUG

int main() {

#ifdef DEBUG
  std::cout << std::unitbuf; // enable automatic flushing for std::cout
#endif

  int x{readNumber()};
  int y{readNumber()};
  writeAnswer(x + y);
  return 0;
}
