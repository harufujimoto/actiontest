#include <iostream>
#include <vector>
#include <cassert>

#include "./add.cpp"

int main() {
  int x, y, z;

  x = 3;
  y = 4;

  add(z, x, y);

  assert(z == 7);
}
