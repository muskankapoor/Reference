#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "sum.h"
#include "doctest.h"

TEST_CASE("testing"){
  CHECK(sum(5)==5);
  CHECK(sum(7)==7);
  CHECK(sum(3)==2);
}
