#include <stdio.h>
#include <wasmedge/wasmedge.h>

int main(int argc, char *argv[])
{
  WasmEdge_Value Val;
  void *Ptr;
  bool IsNull;
  uint32_t Num = 10;

  /* Generate a externref to NULL. */
  Val = WasmEdge_ValueGenNullRef(WasmEdge_RefType_ExternRef);

  IsNull = WasmEdge_ValueIsNullRef(Val);
  /* The `IsNull` will be `TRUE`. */

  Ptr = WasmEdge_ValueGetExternRef(Val);
  /* The `Ptr` will be `NULL`. */

  /* Get the function instance by creation or from module instance. */
  WasmEdge_FunctionInstanceContext *FuncCxt ;

  /* Generate a funcref with the given function instance context. */
  Val = WasmEdge_ValueGenFuncRef(FuncCxt);
  const WasmEdge_FunctionInstanceContext *GotFuncCxt =
      WasmEdge_ValueGetFuncRef(Val);
  /* The `GotFuncCxt` will be the same as `FuncCxt`. */

  /* Generate a externref to `Num`. */
  Val = WasmEdge_ValueGenExternRef(&Num);
  Ptr = WasmEdge_ValueGetExternRef(Val);
  /* The `Ptr` will be `&Num`. */
  printf("%u\n", *(uint32_t *)Ptr);
  /* Will print "10" */

  Num += 55;
  printf("%u\n", *(uint32_t *)Ptr);
  /* Will print "65" */

  return 0;
}
