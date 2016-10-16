#include "lifo.h"



struct lifo* create_lifo(){
  struct lifo *pile = (struct lifo*)malloc(sizeof(struct lifo));
  pile->head = NULL;
  pile->size = 0;
  return pile;
}


int is_empty(struct lifo *pile){
  if(pile->head == NULL){
    return 1;
  }else{
    return 0;
  }
}

struct node* pop(struct lifo *pile){
  struct node *current = pile->head;
  pile->head = current->next;
  pile->size --;
  return current;
}


void push(struct lifo *pile, int data){
  struct node *node = create_node();
  node->data = data;
  node->next = pile->head;

  pile->head = node;
  pile->size ++;
}

void destroy(struct lifo *pile){

  while(!is_empty(pile)){
    struct node *tmp = pop(pile);
    free(tmp);
  }
  free(pile->head);
  free(pile);
}
