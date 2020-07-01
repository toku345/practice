#include "gtest/gtest.h"
#include "main/doller.h"


TEST(MoneyTest, TestMultipulication) {
  Doller five(5);
  five.times(2);
  EXPECT_EQ(10, five.amount);
}
