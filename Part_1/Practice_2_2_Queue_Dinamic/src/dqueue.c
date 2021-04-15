#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <conio.h>
#include "include.h"

struct nodo *raiz = NULL;
struct nodo *fondo = NULL;
void push(int x){
    struct nodo * new;
    new = malloc(sizeof(struct nodo));
    new ->informacion = x;
    new-> sig = NULL;
    if(is_empty()){
        raiz = new;
        fondo = new;
    }else {
        fondo->sig = new;
        fondo = new;
    }
}
int pop(){
    if(!is_empty()){
        int informacion = raiz->informacion;
        struct nodo * bor = raiz;
        if (raiz == fondo) {
            raiz=NULL;
            fondo=NULL;
        }else{ 
            raiz =raiz->sig;
        }
        free(bor);
        return informacion;
    }
    else
        return -1;
}
void display(){
    if (!is_empty()){
        struct nodo *reco = raiz;
        system("cls");
        printf("\n\n==========================\n");
        printf("   >>listado de la Cola<<\n");
        while(reco !=NULL){
            printf("%i\n",reco->informacion);
            reco=reco->sig;
        }
        printf("==========================\n");
        getch();
    }else{
         system("cls");
        printf("\n\n==========================\n");
        printf("  >>La pila esta vacia<<\n");
        printf("==========================\n");
        getch();
        }
}
void destroy(){
    struct nodo *reco=raiz;
    struct nodo *bor;
    while (reco !=NULL){
        bor =reco;
        reco = reco->sig;
        free(bor);
    }
}
int peek(){
    if(!is_empty()){
        int informacion = fondo->informacion;
        return informacion;
    }
    else 
        return -1;
}
int is_empty(){
    if (raiz == NULL)
        return 1;
    else
        return 0;
}