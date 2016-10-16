#include "list.h"
#include "assert.h"

int main(){

  struct list *liste = create_list();
  assert(is_empty(liste) == 1);

  insert(liste, 12);
  assert(is_empty(liste) == 0);
  assert(liste->head->data == 12);
  //printf("on a %d \n", liste->head->data);

  insert(liste, 13);
  insert(liste, 7);
  insert(liste, 76);
  assert(find(liste, 76)->data == 76);
  assert(find(liste, 89) == NULL);
  assert(liste->size == 4);
  //printf("find 12 : %d \n", find(liste, 12)->data);

  delete_data(liste, 76);
  assert(find(liste, 76) == NULL);
  assert( liste->size == 3);

  //clear(liste);
  //printf("size : %d\n", size(liste));
  //assert(is_empty(liste) == 1);

  destroy(liste);
  printf("ok\n");
  return 0;
}
