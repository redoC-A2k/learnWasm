#include <stdio.h>
#include <stdlib.h>
#include "add.h"
int main(int argc, char *argv[])
{
  for (int i=0; i<argc; i++) {
    printf("%d",argc);
    printf("argument - %s\n",argv[i]);
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("and there sum is %d\n",add(a, b));
  return 0;
}
