#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

EST_CASE("Testing Factorial"){
  std::cout << "HELLO WORLD\n";
  CHECK(fact(5)==120);
  CHECK(fact(2)==2);
  CHECK(fact(0)==1);
}

TEST_CASE("Testing Case 2Factorial"){
  std::cout << "HELLO WORLD\n";
  CHECK(fact(5)==120);
  CHECK(fact(2)==2);
  CHECK(fact(0)==1);
}
