#ifndef DQUEUE_H
#define DQUEUE_H
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
struct nodo
{
    int informacion;
    struct nodo *sig;
    
};
void push(int x);
int is_empty();
int pop();
void display();
void destroy();
int peek();
#endif