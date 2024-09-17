#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected)
{
  //Arrange
  string input="";
  int expectedValue = 0;
  //ACT
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue, expectedValue);
  
}
TEST(StringCalculatorTestSuite,add_ZeroInputString_ZeroIsExpected)
{
  //Arrange
  string input= "0";
  int expectedValue = 0;
  //ACT
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue, expectedValue);
  
}
TEST(StringCalculatorTestSuite,add_OneInputString_OneIsExpected)
{
  //Arrange
  string input= "1";
  int expectedValue = 1;
  //ACT
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue, expectedValue);
  
}
TEST(StringCalculatorTestSuite,add_CommadelimiterString_AddIsExpected)
{
  //Arrange
  string input= " 1,2";
 int expectedValue = 3;
  //ACT
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
  
}
TEST(StringCalculatorTestSuite,add_NegativeString_InvalidIsExpected)
{
  //Arrange
  string input= "-1,2";
string expectedValue = -1;
  //ACT
  const char* actualValue = Add(input);
  //Assert
 ASSERT_THROW(actualValue,invalid_argument);
}
