#include <wasmedge/wasmedge.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("WasmEdge version: %s\n", WasmEdge_VersionGet());
  return 0;
}

