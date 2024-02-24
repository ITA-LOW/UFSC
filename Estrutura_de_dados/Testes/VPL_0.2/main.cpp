#include "swap.h"
#include "gtest/gtest.h"

using testing::InitGoogleTest;



TEST(TesteSwap, Teste1)
{
    int a{10};
    int b{20};

    swap(&a, &b);

    ASSERT_EQ(a, 20);
    ASSERT_EQ(b, 10);
}


int main(int argc, char **argv)
{
  InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}