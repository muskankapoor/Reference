#include <iostream>
#include "func.h"
using std::cout;


int fix_teen(int n){
  int sum;
  if (n==13 || n==14 || n==17 || n==18 || n==19){
    return sum=0;
  }
  else{
    return n;
  }
}

int noTeenSum(int a, int b, int c) {
  a=fix_teen(a);
  b=fix_teen(b);
  c=fix_teen(c); //a+b+c;
  return a+b+c;
}