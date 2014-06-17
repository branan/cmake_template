#include <component/adder.hpp>

#include <gtest/gtest.h>

using namespace component;

TEST(component_adder, result) {
  adder add(1, 2);
  ASSERT_EQ(3, add.result());
}