#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <limits.h>
#include "stackd.h"

int menu();

int main(){
    Node *top_stack = createStack();
    int option, item;

    do{
       option = menu();
       switch (option){
       case 1:
                system("cls");
                printf("===========================================\n");
                printf("  >>Ingresar el elemento : ");
                scanf("%d", &item);
                push(&top_stack, item);
        break;
       case 2:
                item = pop(&top_stack);
                if(item != INT_MIN){
                    system("cls");
                    printf("======================================\n");
                    printf("  El Elemento %d Fue Eliminado \n", item);
                    printf("======================================\n");
                    getch();
                }else{
                    system("cls");
                    printf("======================================\n");    
                    printf("           Underflow error\n");
                    printf("======================================\n");
                    getch();
                }
        break;
        case 3:
             item = peek(top_stack);
                if(item != INT_MIN){
                    system("cls");
                    printf("======================================\n");
                    printf("  Elemento de la cima: %d \n", item);
                    printf("======================================\n");
                    getch();
                }else{
                    system("cls");
                    printf("======================================\n");
                    printf("      No hay elementos en la pila \n");
                    printf("======================================\n");
                    getch();
                }
        break;
        case 4:
            system("cls");
            printf("============================\n");
            display(top_stack);
            printf("\n============================\n");
            getch();
        break;
        case 5: destroyStack(top_stack);
                exit(EXIT_SUCCESS);
       default:
            
	        system("cls");
            printf("============================\n");
            printf("Opción inválida \n");
            printf("============================\n");
            getch();
                break;
       } 
    }while(option!=5);

    return 0;
}

int menu(){
    system("cls");
    int option;
    printf("\n\n==================================");
    printf("\n           Menu de Opciones");
    printf("\n==================================");
    printf("\n 1) Insertar elemento");
    printf("\n 2) Eliminar elemento");
    printf("\n 3) Mirar elemento de la cima");
    printf("\n 4) Mostrar pila");
    printf("\n 5) Salir");
    printf("\n==================================");
    printf("\n     ");
    scanf("%d", &option);
    return option;
}