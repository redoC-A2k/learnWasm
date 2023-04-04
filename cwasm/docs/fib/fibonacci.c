#include <stdio.h>
#include "fibonacci.h"

int fib(int n){
  int f1 = 0;
  int f2 = 1;
  if(n<=2){
    if(n==1) return f1;
    else return f2;
  }
  else
    for(int i=2; i<n; i++ ){
      int temp = f2;
      f2=f1+f2;
      f1=temp;
    }
  return f2;
}
