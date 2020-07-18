#include "common.h"

#include <dlfcn.h>
#include <stdio.h>

int main() {
  using func_type = void (*)();

  auto handle = dlopen("./libdynamic.so", RTLD_LAZY);
  if (!handle) {
    fprintf(stderr, "Error: %s\n", dlerror());
    return -1;
  }

  a = 42;
  auto func = (func_type)dlsym(handle, "call");
  if (!func) {
    fprintf(stderr, "Error: %s\n", dlerror());
    dlclose(handle);
    return -1;
  }
  func();

  dlclose(handle);
  return 0;
}
