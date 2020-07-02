#include "gtest/gtest.h"
#include "main/dollar.h"


TEST(MoneyTest, TestMultipulication) {
  Dollar five(5);
  Dollar product = five.times(2);
  EXPECT_EQ(10, product.amount);
  product = five.times(3);
  ASSERT_EQ(15, product.amount);
}

TEST(MoneyTest, TestEquality) {
  ASSERT_TRUE((Dollar {5}).equals(Dollar {5}));
  ASSERT_FALSE((Dollar {5}).equals(Dollar {6}));
}
