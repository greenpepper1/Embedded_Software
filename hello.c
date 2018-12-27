#include <stdio.h>
#include <stdlib.h>
#include "hello.h"
#include "controls.h"

typedef struct {
  int  dna[DNA_SIZE];
}pop;

void create_dna()
{
  pop member;
  time_t t;
  /* Intializes random number generator */
  srand((unsigned) time(&t));

  /* Print 5 random numbers from 0 to 49 */
  for(int i=0; i < DNA_SIZE; i++)
  {
    member.dna[i] = rand() % DNA_VERI;
    printf("%d\n", member.dna[i]);
  }
}
