#pragma once

namespace component {
  class adder {
    int a,b;
  public:
    adder(int, int);
    int result() const;
  };
}
