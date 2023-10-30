#include <cassert>
#include <iostream>
#include <vector>

#include "./add.cpp"

int main() {
  int x, y, z;

  x = 3;
  y = 4;

  add(z, x, y);

  if (z != 7) {
    std::cout << "ERROR" << std::endl;
    std::cout << "expected : " << 7 << std::endl;
    std::cout << "actual : " << z << std::endl;
    exit(1);
  }
}
