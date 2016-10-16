#ifndef HASH_H
#define HASH_H


#include "node.h"


struct hash{
  int size;
  struct node **table;
}

int hashing(int key);

struct hash create_hash();

void insert(struct hash *table, int key, int data);

void find(struct hash *table, int key);

void delete(struct hash *table, int key);

#endif
