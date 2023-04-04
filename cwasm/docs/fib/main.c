#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

int main(int argc, char *argv[])
{
  if (argc<2) {
    return 0;
  }
  int n = atoi(argv[1]);
  printf("%d",fib(n));
  return 0;
}
