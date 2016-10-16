#ifndef NODE_H
#define NODE_H


#include <stdio.h>
#include <stdlib.h>


struct node{
  int data;
  struct node *next;
};


struct node* create_node();

#endif
