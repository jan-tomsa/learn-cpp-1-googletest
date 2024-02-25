#include <string>

#include "pch.h"
#include "MyUnit1.hpp"
#include "SplitString.hpp"

using namespace std;


TEST(TestStringLength, TestLength) {
	string tst_string = "XXX";
	int l = length_of_string(tst_string);
	EXPECT_EQ(l, 3);
}

TEST(TestStringLength2, TestLength) {
	string tst_string = "Hello!";
	int l = length_of_string(tst_string);
	EXPECT_EQ(l, 6);
	//EXPECT_TRUE(true);
}


TEST(TestStringSplit1, TestSplitting) {
	string tst_string = "First:Second:Third";
	auto r = split(tst_string, ':');
	int l = r.size();
	EXPECT_EQ(l, 3);
}

