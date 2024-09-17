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
  //AC
  //Assert
 ASSERT_THROW(Add(input),invalid_argument);
}
TEST(StringCalculatorTestSuite,add_Passedover1000String_AddIsExpected)
{
  //Arrange
  string input= " 1,1000,1002";
 int expectedValue = 1001;
  //ACT
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,add_MutliplecommaDelimitersString_AddIsExpected)
{
  //Arrange
  string input= " 1,2,999";
 int expectedValue = 1002;
  //ACT
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,add_MutliplecommaDelimitersString_AddIsExpected)
{
  //Arrange
  string input= " 1\n2,999";
 int expectedValue = 1002;
  //ACT
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}
