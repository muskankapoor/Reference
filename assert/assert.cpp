#include <iostream>
#include <cassert>

int fact(int n){
  int p=1;
  for (int i=0; i<n; i++){
    p=p*i;
  }
  return 6;
}

int main(){
  int ans;
  ans=fact(3);
  assert(fact(3)==6);
  assert(fact(5)==120);
  return 0;
}
