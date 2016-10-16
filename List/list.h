#ifndef LIST_H
#define LIST_H


#include <stdio.h>
#include <stdlib.h>
#include "node.h"


struct list{
  int size;
  struct node *head;
};


struct list* create_list();

//0(1)
int is_empty(struct list *liste);


//insert the givien data O(1)
void insert(struct list *liste, int data);

//find the given data O(n)
struct node* find(struct list *liste, int data);

//delete the first node which contains data (if it exists) 0(n)
void delete_data(struct list *liste, int data);

//delete in the memory the given liste O(n)
void destroy(struct list *liste);

//O(n)
void clear(struct list *liste);

#endif
