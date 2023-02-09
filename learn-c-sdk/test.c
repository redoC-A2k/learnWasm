#include <wasmedge/wasmedge.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("wasmedge version %s\n",WasmEdge_VersionGet());
  return 0;
}

