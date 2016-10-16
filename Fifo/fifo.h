#ifndef FIFO_H
#define FIFO_H


#include <stdio.h>
#include <stdlib.h>


struct node{
  int data;
  struct node *pred;
  struct node *next;
}

struct fifo{
  int size;
  struct node *tail;
  struct node *head;
}

//O(1)
struct node* create_node();

//O(1)
struct fifo create_fifo();

//O(1)
int is_empty(struct fifo*);

//O(1)
struct node* pop(struct fifo*);

//O(1)
void push(struct fifo* , int data);

//O(1)
void push_front(struct fifo*, int data);


//O(n)
void destroy(struct fifo*);


#endif
