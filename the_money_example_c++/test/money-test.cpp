#include "gtest/gtest.h"
#include "main/dollar.h"
#include "main/franc.h"


TEST(MoneyTest, TestMultipulication) {
  Dollar five(5);
  EXPECT_EQ(Dollar{10}, five.times(2));
  ASSERT_EQ(Dollar{15}, five.times(3));
}

TEST(MoneyTest, TestEquality) {
  ASSERT_TRUE(Dollar{5} == Dollar{5});
  ASSERT_FALSE(Dollar{5} == Dollar{6});
  ASSERT_TRUE(Franc{5} == Franc{5});
  ASSERT_FALSE(Franc{5} == Franc{6});
}

TEST(MoneyTest, TestFrancMultipulication) {
  Franc five(5);
  EXPECT_EQ(Franc{10}, five.times(2));
  ASSERT_EQ(Franc{15}, five.times(3));
}
