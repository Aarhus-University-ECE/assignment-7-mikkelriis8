#include "stack.h"

void initialize(stack* s){
  //implement initialize here
  s->head = NULL;
  assert(s->head == NULL);
}

void push(int x, stack* s){
  //implement push here
  node *new;
  new = (node*) malloc(sizeof(node));
  new->data = x;
  if (s->head == NULL) {
    new->next = NULL;
  } else {
    new->next = s->head;
  }
  s->head = new;
}

int pop(stack* s){
  // implement pop here
  if(s->head == NULL) {
    printf("\nEMPTY STACK\n");
  }
  else {
    node *t = s->head;
    int y = s->head->data;
    s->head = s->head->next;
    free(t);
    return y;
  }
  return 0;
}

void empty(stack* s)
{
  if(s->head == NULL) {
    printf("Stack: EMPTY");
  } else {
    printf("Stack: NOT EMPTY");
  }
}

bool full(stack* s) {
  //implement full here
  return false;
}
