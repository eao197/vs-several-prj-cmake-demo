#include <gtest/gtest.h>

#include <hello.hpp>

TEST(CoreTestCases, calculate)
{
	ASSERT_EQ( 7, core::calculate(3, 4));
}

