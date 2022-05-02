#include "gtest/gtest.h"
#include "main/money.h"

TEST(MoneyTest, TestMultipulication) {
  Money five = dollar(5);
  ASSERT_EQ(dollar(10), five.times(2));
  ASSERT_EQ(dollar(15), five.times(3));
}

TEST(MoneyTest, TestEquality) {
  ASSERT_TRUE(dollar(5) == dollar(5));
  ASSERT_FALSE(dollar(5) == dollar(6));
  ASSERT_FALSE(franc(5) == dollar(5));
}

TEST(MoneyTest, TestCurrency) {
  ASSERT_EQ("USD", dollar(1).currency());
  ASSERT_EQ("CHF", franc(1).currency());
}

TEST(MoneyTest, TestSimpleAddition) {
  Money sum = dollar(5) + dollar(5);
  ASSERT_EQ(dollar(10), sum);
}
