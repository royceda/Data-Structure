#include "node.h"




struct node* create_node(){
  struct node *noeud = (struct node*)malloc(sizeof(struct node));
  noeud->next = NULL;
  return noeud;
}
