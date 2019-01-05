#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int sum(int a){

  return a;
}

TEST_CASE("Testing sum"){
  CHECK(sum(7)==7);
}
