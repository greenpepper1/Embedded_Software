#include <stdio.h>
#include <stdlib.h>
#include "pop_generator.h"
#include "member_generator.h"
#include "controls.h"

struct pop_t{
  struct member_t **member;
};

/* fills the dna */
void create_pop(struct pop_t *p)
{
  struct pop_t pop;
  p = &pop;

  pop.member = malloc(POP_SIZE * obj_size()); // assume it worked

  /* Print 5 random numbers from 0 to 9 */
  for(int i=0; i < POP_SIZE; i++)
  {
    // struct member_t * individual;
    create_member(pop.member[i]);
    // pop.member[i] = individual;
  }

  show_member(p->member[0]);
  show_member(p->member[1]);
  show_member(p->member[2]);
  show_member(p->member[3]);
  // printf("%d\n", pop.member[0]);
  // printf("%d\n", pop.member[1]);
  // printf("%d\n", pop.member[2]);
  // printf("%d\n", pop.member[3]);
  // printf("%d\n", pop.member[4]);

}

/* shows the data in the dna */
void show_pop(struct pop_t *p)
{
  struct pop_t pop;
  p = &pop;

  // for(int i=0; i < POP_SIZE; i++)
  // {
  //   show_member(p->member[i]);
  // }
}
