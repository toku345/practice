#include "gtest/gtest.h"
#include "main/money.h"
#include "main/dollar.h"
#include "main/franc.h"


TEST(MoneyTest, TestMultipulication) {
  Money five = Money::dollar(5);
  EXPECT_EQ(Money::dollar(10), five.times(2));
  ASSERT_EQ(Money::dollar(15), five.times(3));
}

TEST(MoneyTest, TestEquality) {
  ASSERT_TRUE(Money::dollar(5) == Money::dollar(5));
  ASSERT_FALSE(Money::dollar(5) == Money::dollar(6));
  ASSERT_TRUE(Franc{5} == Franc{5});
  ASSERT_FALSE(Franc{5} == Franc{6});
  ASSERT_FALSE(Franc{5} == Money::dollar(5));
  ASSERT_FALSE(Money::dollar(5) == Franc{5});
}

TEST(MoneyTest, TestFrancMultipulication) {
  Franc five(5);
  EXPECT_EQ(static_cast<Money>(Franc{10}), five.times(2));
  ASSERT_EQ(static_cast<Money>(Franc{15}), five.times(3));
}
