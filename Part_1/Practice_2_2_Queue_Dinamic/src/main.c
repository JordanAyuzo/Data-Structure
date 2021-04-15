#include <stdio.h>
#include <conio.h>
#include <limits.h>
#include <stdlib.h>
#include "include.h"

int main(){
    int opt = 0, info, temp;
    do{
        system("cls");
        printf("\n\n================================\n");
        printf("===    Menu de Opciones      ===\n");
        printf("================================\n");
        printf("   1) Insertar Numero\n");
        printf("   2) Quitar de La Cola\n");
        printf("   3) Mirar ultimo en la cola\n"); 
        printf("   4) mostrar Todo\n");  
        printf("   5) salir\n");
        printf("================================\n");
        printf("   Insertar Opcion: ");
        scanf("%d" , &opt);
        switch (opt)
        {
        case 1:
            system("cls");
            printf("\n\n================================\n");
            printf("   >>ingrese un numero: ");
            scanf("%d", &info);
            push(info);
        break;
        case 2:
            temp = pop();
            if( temp != -1){
                system("cls");
                printf("\n\n===========================================\n");
                printf ("El numero %d ha sido eliminado de la cola",temp);
                printf("===========================================\n");
                getch();
            }
            else{
                system("cls");
                printf("\n\n===========================================\n");
                printf ("No hay Elementos en la pila\n");
                printf("===========================================\n");
                getch();
            }
        break;
        case 3:
            if(peek() != -1){
                system("cls");
                printf("\n\n===========================================\n");
                printf("El Ultimo de la Cola es : %d \n", peek());
                printf("===========================================\n");
                getch();
            }
            else{
                system("cls");
                printf("\n\n===========================================\n");
                printf("No Hay Elementos En La Cola\n");
                printf("===========================================\n");
                getch();
            }
        break;
        case 4:
          display();
        break;
        case 5:
          destroy();
        break;
        default:
            system("cls");
            printf("\n\n===========================================\n");
            printf("Esa opcion no existe. Lo sentimos :(\n");
            printf("===========================================\n");
            getch();
        break;
        }
    }while(opt !=5);
    return 0;
}