#include "Buscador.h"
#include "gtest/gtest.h"

using testing::InitGoogleTest;



TEST(TesteBuscador, Busca1)
{
    const char* s{"abcdefghij"};
    const char* c{"a"};
    Buscador b{};

    ASSERT_EQ(b.buscar(s, 10, c), 0);

    c = "b";
    ASSERT_EQ(b.buscar(s, 10, c), 1);

    c = "j";
    ASSERT_EQ(b.buscar(s, 10, c), 9);

    c = "k";
    ASSERT_EQ(b.buscar(s, 10, c), -1);
}


int main(int argc, char **argv)
{
  InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}