#include <string>

#include "pch.h"
#include "MyUnit1.hpp"

using namespace std;


TEST(TestStringLength, TestLength) {
	string tst_string = "XXX";
	int l = length_of_string(tst_string);
	EXPECT_EQ(l, 3);
	//EXPECT_TRUE(true);
}