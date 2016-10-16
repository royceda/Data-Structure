#include "lifo.h"
#include <assert.h>


int main(){
  struct lifo *pile = create_lifo();
  assert(is_empty(pile) == 1);

  push(pile, 12);
  assert(is_empty(pile) == 0);
  assert(pile->size == 1);

  struct node *tmp = pop(pile);
  assert(is_empty(pile) == 1);
  free(tmp);

  for(int i = 0; i<100; i++){
    push(pile, i);
  }
  printf("size : %d\n", pile->size);
  assert(is_empty(pile) == 0);
  assert(pile->size == 100);


  destroy(pile);

  return 0;
}
