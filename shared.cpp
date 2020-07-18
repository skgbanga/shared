#include "common.h"

#include <stdio.h>

extern "C" {

void call() {
  printf("%d\n", a);
}
}
