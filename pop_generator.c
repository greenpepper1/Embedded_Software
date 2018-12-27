#include <stdio.h>
#include <stdlib.h>
#include "pop_generator.h"
#include "controls.h"

struct pop{
  int  dna[DNA_SIZE];
};


/* fills the dna */
void create_dna(struct pop *p)
{
  struct pop member;
  p = &member;

  /* Intializes random number generator */
  time_t t;
  srand((unsigned) time(&t));

  /* Print 5 random numbers from 0 to 9 */
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
