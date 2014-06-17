#include "component/adder.hpp"

#include <iostream>

int main() {
  component::adder add(1, 2);
  std::cout << add.result() << std::endl;
}
