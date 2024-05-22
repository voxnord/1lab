#include "pch.h"
#include "../1lab/functions.h"

using namespace func;
///////////////////
//Первая рекурсия//
///////////////////
TEST(recursion1, Test1) {
  EXPECT_EQ(2, recursion_1(3));
  EXPECT_TRUE(true);
}
TEST(recursion1, Test2) {
	EXPECT_EQ(21, recursion_1(27));
	EXPECT_TRUE(true);
}
TEST(recursion1, Test3) {
	EXPECT_EQ(51, recursion_1(63));
	EXPECT_TRUE(true);
}
///////////////////
//Вторая рекурсия//
///////////////////
TEST(recursion2, Test1) {
	EXPECT_EQ(1054004169, recursion_2(825));
	EXPECT_TRUE(true);
}
TEST(recursion2, Test2) {
	EXPECT_EQ(-907148308, recursion_2(1956));
	EXPECT_TRUE(true);
}
TEST(recursion2, Test3) {
	EXPECT_EQ(-1704166639, recursion_2(113));
	EXPECT_TRUE(true);
}