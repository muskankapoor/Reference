#include <iostream>
#include <cassert>
using namespace std;

int mult(int n){
  int sum=n*n;
  return sum;
}


int main(){
  mult(7);
  assert(mult(7)==49);
  assert(mult(3)==10);
}
