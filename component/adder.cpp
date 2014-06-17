#include "adder.hpp"

namespace component {
  adder::adder(int a, int b) : a(a), b(b) {}

  int adder::result() const {
    return a + b;
  }
}
