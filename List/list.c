#include "list.h"


struct list* create_list(){
  struct list *liste = (struct list *)malloc(sizeof(struct list));
  liste->head = NULL;
  return liste;
}





int is_empty(struct list *liste){
  if(liste->head == NULL){
    return 1;
  }else{
    return 0;
  }
}

//insert the givien data O(1)
void insert(struct list *liste, int data){
  struct node *noeud = create_node();
  noeud->data = data;
  noeud->next = liste->head;
  liste->head = noeud;
  liste->size ++;
}


//find the given data O(n)
struct node* find(struct list *liste, int data){
  struct node *current = liste->head;
  while(current != NULL){
    if(current->data == data){
      return current;
    }else{
      current = current->next;
    }
  }
  return NULL;
}


//delete the first node which contains data (if it exists) 0(n)
void delete_data(struct list *liste, int data){
  struct node *current = liste->head;
  if(current != NULL){
    if(current->data == data){
      liste->head = current->next ;
      free(current);
    }else{
      while(current->next != NULL){
        if(current->next->data == data){
          struct node *tmp = current->next;
          current->next = tmp->next ;
          free(tmp);
        }
        current = current->next;
      }
    }
    liste->size --;
  }
}


void clear(struct list *liste){}


//delete in the memory the given liste
void destroy(struct list *liste){
  if(liste->head != NULL){
    struct node *current = liste->head;

  while(current != NULL){
    struct node *tmp = current;
    current = current->next;
    free(tmp);
  }
}
free(liste);
}
