#include <gtest/gtest.h>

#include "../src/extends/Elem.hpp"
#include "../src/extends/FindTwoIdentical.cpp"
#include "../src/extends/Create.cpp"

TEST(Iter, FindTwoIdenticalT)
{
  Elem *begin = NULL,
       *end = NULL;

  int a[5] = {1, 0, 1, 3, 5};

  for (int i = 0; i < 5; i++)
    Create(begin, a[i]);

  EXPECT_EQ(FindTwoIdentical(begin), true);
}

TEST(Iter, FindTwoIdenticalF)
{
  Elem *begin = NULL,
       *end = NULL;

  int a[5] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++)
    Create(begin, a[i]);

  EXPECT_EQ(FindTwoIdentical(begin), false);
}

TEST(Rec, FindTwoIdenticalT)
{
  Elem *begin = NULL,
       *end = NULL;

  int a[5] = {1, 0, 1, 3, 5};

  for (int i = 0; i < 5; i++)
    Create(begin, a[i]);

  EXPECT_EQ(FindTwoIdentical_rec(begin), true);
}

TEST(Rec, FindTwoIdenticalF)
{
  Elem *begin = NULL,
       *end = NULL;

  int a[5] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++)
    Create(begin, a[i]);

  EXPECT_EQ(FindTwoIdentical_rec(begin), false);
}

TEST(Multi, FindTwoIdenticalTT)
{
  Elem *begin = NULL,
       *end = NULL;

  int a[5] = {1, 0, 1, 3, 5};

  for (int i = 0; i < 5; i++)
    Create(begin, a[i]);

  EXPECT_EQ(FindTwoIdentical_rec(begin), FindTwoIdentical(begin));
}

TEST(Multi, FindTwoIdenticalFF)
{
  Elem *begin = NULL,
       *end = NULL;

  int a[5] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++)
    Create(begin, a[i]);

  EXPECT_EQ(FindTwoIdentical_rec(begin), FindTwoIdentical(begin));
}
