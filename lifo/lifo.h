#ifndef LIFO_H
#define LIFO_H

#include "../List/node.h"


struct lifo{
  int size;
  struct node *head;
};

//O(1)
struct lifo* create_lifo();

//O(1)
int is_empty(struct lifo *pile);


//O(1)
struct node* pop(struct lifo *pile);

//O(1)
void push(struct lifo *pile, int data);

//O(n)
void destroy(struct lifo *pile);

#endif 
