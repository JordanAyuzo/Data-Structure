#ifndef STACKD_H
#define STACK_H


struct node{
    int data;
    struct node *next;
};
typedef struct node Node;
Node* createStack();
Node* create_node(int data);
void  destroyStack(Node *top);
void  push(Node **top, int item);
int   pop(Node **top);
int   peek(Node *top);
void  display(Node *top);
int is_empty(Node *top);
#endif