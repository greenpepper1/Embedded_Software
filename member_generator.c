#include <stdio.h>
#include <stdlib.h>
#include "member_generator.h"
#include "controls.h"


struct member_t{
  int  dna[DNA_SIZE];
} member_;

void start_clock(){
  time_t t;
  srand((unsigned) time(&t));
}

struct member_t *member_init(){
  // struct member_t member;
  // struct member_t *s = malloc(sizeof(member));
  // s->dna[0] = 5;
  return malloc(sizeof(struct member_t));
}

/* fills the dna */
void create_member(struct member_t *p)
{
  // struct member_t member;
  // p = &member;

  /* Print 5 random numbers from 0 to 9 */
  for(int i=0; i < DNA_SIZE; i++)
  {
    p->dna[i] = rand() % 10;
    // printf("%d\n", member.dna[i]);
  }
}

/* shows the data in the dna */
void show_member(struct member_t *p)
{
  // struct member_t member;
  // p = &member;
  printf("\n");
  for(int i=0; i < DNA_SIZE; i++)
  {
    printf("%d\n", p->dna[i]);
  }
}
