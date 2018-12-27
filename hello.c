#include <stdio.h>
#include <stdlib.h>
#include "hello.h"
#include "controls.h"

struct pop{
  int  dna[DNA_SIZE];
};

size_t obj_size(void) {
    return sizeof(struct pop);
}

/* fills the dna */
void create_dna(struct pop *p)
{
  time_t t;
  struct pop member;
  p = &member;

  /* Intializes random number generator */
  srand((unsigned) time(&t));

  /* Print 5 random numbers from 0 to 49 */
  for(int i=0; i < DNA_SIZE; i++)
  {
    p->dna[i] = rand() % 10;
    printf("%d\n", p->dna[i]);
  }
}

/* shows the data in the dna */
void show_dna(struct pop *p)
{
  struct pop member;
  p = &member;
  printf("\n");
  for(int i=0; i < DNA_SIZE; i++)
  {
    printf("%d\n", p->dna[i]);
  }
}
