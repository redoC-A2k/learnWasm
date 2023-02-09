#include <wasmedge/wasmedge.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  WasmEdge_Value Val;
  Val = WasmEdge_ValueGenI32(123456);
  printf("%d\n", WasmEdge_ValueGetI32(Val));
  /* Will print "123456" */

  Val = WasmEdge_ValueGenI64(1234567890123LL);
  printf("%ld\n", WasmEdge_ValueGetI64(Val));
  /* Will print "1234567890123" */

  Val = WasmEdge_ValueGenF32(123.456f);
  printf("%f\n", WasmEdge_ValueGetF32(Val));
  /* Will print "123.456001" */

  Val = WasmEdge_ValueGenF64(123456.123456789);
  printf("%.10f\n", WasmEdge_ValueGetF64(Val));
  /* Will print "123456.1234567890" */

  return 0;
}
