#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<limits.h>
#include<string.h>
#include "include.h"

void inicializacion (Pila * tas){
tas->inicio = NULL;
tas->tamano = 0;
}
int apilar (Pila * tas, char *dato){
Elemento *nuevo_elemento;
if ((nuevo_elemento = (Elemento *) malloc (sizeof (Elemento))) == NULL)
return -1;
if ((nuevo_elemento->dato = (char *) malloc (50 * sizeof (char)))== NULL)
return -1;
strcpy (nuevo_elemento->dato, dato);
nuevo_elemento->siguiente = tas->inicio;
tas->inicio = nuevo_elemento;
tas->tamano++;
return 0;
}
int desapilar (Pila * tas){
Elemento *sup_elemento;
if (tas->tamano == 0)
return -1;
sup_elemento = tas->inicio;
tas->inicio = tas->inicio->siguiente;
free (sup_elemento->dato);
free (sup_elemento);
tas->tamano--;
return 0;
}
void muestra (Pila * tas,Pila * historial_hora,int *num){
Elemento *actual;
Elemento *actual2;
int i;
if(tas->inicio == NULL){
    printf("\t El Historial Esta Vacio\n");
    *num=0;
}
else{
actual = tas->inicio;
actual2 = historial_hora->inicio;
for(i=0;i<tas->tamano;++i){
printf("\t  %s   -  %s \n", actual->dato,actual2->dato );
actual = actual->siguiente;
actual2= actual2->siguiente;
}
}
}
