#include "MinhaMatriz.h"
#include "gtest/gtest.h"
#include <iostream>

using testing::InitGoogleTest;

TEST(TesteSwap, Teste1)
{
  int **a = new int *[2];
  a[0] = new int[3];
  a[1] = new int[3];
  a[0][0] = 1;
  a[0][1] = 2;
  a[0][2] = 3;
  a[1][0] = 4;
  a[1][1] = 5;
  a[1][2] = 6;

  int **at = new int *[3];
  at[0] = new int[2];
  at[1] = new int[2];
  at[2] = new int[2];
  at[0][0] = 1;
  at[0][1] = 4;
  at[1][0] = 2;
  at[1][1] = 5;
  at[2][0] = 3;
  at[2][1] = 6;

  MinhaMatriz ma{2, 3, a};
  MinhaMatriz mt{3, 2, at};

  MatrizAbstrata *mt2 = ma.transpor();
  
  ASSERT_TRUE(mt == *mt2);
  
    delete mt2;

}

int main(int argc, char **argv)
{
  InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}