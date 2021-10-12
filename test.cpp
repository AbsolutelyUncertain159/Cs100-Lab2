
/*#include "c-echo.h" */
#include "header/circle.hpp"
#include "gtest/gtest.h"

/*
TEST(EchoTest, HelloWorld)
{
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) 
{
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}
TEST(EchoTest, SpecialCharacters)
{
    char* test_val[3]; test_val[0] = "./c-echo";test_val[1] = "hello my friend,"; test_val[2] = "my name is 'dj'!";
    EXPECT_EQ("hello my friend, my name is 'dj'!", echo(3,test_val));
}


TEST(EchoTest, Capitlization)
{
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "tHiS Is"; test_val[2] = "a TeSt fOr CaPiTiLiZatIon"; 
    EXPECT_EQ("tHiS Is a TeSt fOr CaPiTiLiZatIon", echo(3,test_val));
} 

TEST(EchoTest, NumberTest)
{
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "Number Test:"; test_val[2] = "219+293/2832*2830/982 = 0.521";
    EXPECT_EQ("Number Test: 219+293/2832*2830/982 = 0.521", echo(3,test_val));
}

*/

TEST(AreaTests, ZeroRadius)
{
    Circle cZero(0.0);
    double areaZero = cZero.area();
    EXPECT_DOUBLE_EQ(0.0, areaZero);
}

TEST(AreaTests, PositiveRadius)
{
    Circle cPos(10.0);
    double areaPositive = cPos.area();
    EXPECT_NEAR(314.15925, areaPositive, 0.0001);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
