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

  float c{1.5};
  float d{2.5};

  swap(&c, &d);
  ASSERT_EQ(c, 2.5);
  ASSERT_EQ(d, 1.5);

  char e{'e'};
  char f{'f'};

  swap(&e, &f);
  ASSERT_EQ(e, 'f');
  ASSERT_EQ(f, 'e');
}

int main(int argc, char **argv)
{
  InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}