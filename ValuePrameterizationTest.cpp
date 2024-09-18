#include "StringCalculator.h"
#include <gtest/gtest.h>
#include <tuple>

class StringCalculatorFixture:public testing::Test{
protected:
    string input;
    int expectedValue;
    int actualValue;
};
class StringCalculatorParameterFixture:public StringCalculatorFixture, public testing::WithParamInterface<tuple<string,int>>{
void SetUp() override {
input= std::get<0>(GetParam());
expectedValue= std::get<1>(GetParam());
}

};
//Parameter Values
INSTANTIATE_TEST_SUITE_P(ValidStringCalculatorInputs,StringCalculatorParameterFixture,testing::Values(
  make_tuple("", 0),
  make_tuple("0", 0),
  make_tuple("1", 1),
  make_tuple("1,2", 3),
  make_tuple("1,2,3", 6)
  
));
void fakeDisplayFunction(int result){
    
}

TEST_P(StringCalculatorParameterFixture,ParameterizedTest){
      //input= std::get<0>(GetParam());
      //expectedValue= std::get<1>(GetParam());
      //actualValue=Add(input);
    Add(input);
      //ASSERT_EQ(actualValue,expectedValue);
     
}
/*TEST(StringCalculatorTestSuite,add_NegativeString_InvalidIsExpected)
{
  //Arrange
  string input= "-1,2";


 //ASSERT_THROW(Add(input),invalid_argument);
}*/



