#include "gtest/gtest.h"
#include "main/doller.h"


TEST(MoneyTest, TestMultipulication) {
  Doller five(5);
  Doller product = five.times(2);
  EXPECT_EQ(10, product.amount);
  product = five.times(3);
  EXPECT_EQ(15, product.amount);
}
