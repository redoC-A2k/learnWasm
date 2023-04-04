#include <wasmedge/wasmedge.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  cout<<"WasmEdge version: "<<WasmEdge_VersionGet();
  return 0;
}

