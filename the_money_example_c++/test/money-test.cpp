#include "gtest/gtest.h"
#include "main/dollar.h"
#include "main/franc.h"


TEST(MoneyTest, TestMultipulication) {
  Dollar five = dollar(5);
  ASSERT_EQ(static_cast<Money>(dollar(10)), five.times(2));
  ASSERT_EQ(static_cast<Money>(dollar(15)), five.times(3));
}

TEST(MoneyTest, TestEquality) {
  ASSERT_TRUE(dollar(5) == dollar(5));
  ASSERT_FALSE(dollar(5) == dollar(6));
  ASSERT_TRUE(franc(5) == franc(5));
  ASSERT_FALSE(franc(5) == franc(6));
  ASSERT_FALSE(franc(5) == dollar(5));
  ASSERT_FALSE(dollar(5) == franc(5));
}

TEST(MoneyTest, TestFrancMultipulication) {
  Franc five = franc(5);
  ASSERT_EQ(static_cast<Money>(franc(10)), five.times(2));
  ASSERT_EQ(static_cast<Money>(franc(15)), five.times(3));
}

TEST(MoneyTest, TestCurrency) {
  ASSERT_EQ("USD", dollar(1).currency());
  ASSERT_EQ("CHF", franc(1).currency());
}

TEST(MoneyTest, TestDifferentClassEquality) {
  ASSERT_TRUE(Money(10, "CHF") == Franc(10, "CHF"));
  ASSERT_TRUE(Franc(10, "CHF") == Money(10, "CHF"));
  ASSERT_FALSE(Franc(10, "CHF") == Money(10, "USD"));
  ASSERT_TRUE(Dollar(10, "USD") == Money(10, "USD"));
}
