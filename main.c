#include <stdio.h>
#include <stdlib.h>
#include "pop_generator.h"

int main()
{
  struct pop_t * pop_handel;
  create_pop(pop_handel);
  show_pop(pop_handel);
}
