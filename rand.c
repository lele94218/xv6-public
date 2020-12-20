// TODO: it's thread unsafe.
#include "types.h"

uint randstate = 1;

uint
rand()
{
  randstate = randstate * 1664525 + 1013904223;
  return randstate;
}

void
srand(uint x)
{
  randstate = x;
}
