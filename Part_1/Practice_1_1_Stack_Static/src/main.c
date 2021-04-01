#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"
#define ZIZE 80
void menu();
int main(){
	char *infijo, caracter[ZIZE];
    int opt=0;
    do{
        menu();
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
            system("cls");
            printf("\n\t\tIngrese la operacion: ");
	        scanf("%s", caracter);
	        infijo = caracter;
            printf("\n\t___________________________________");
            printf("\n \t              CONVERSION       ");
            printf("\n\t___________________________________\n");
	        printf("\tSu Postfijo es : %s", postfijo(infijo));
            getchar();getchar();
            break;
        case 2:
            system("cls");
            printf("\n\t\tIngrese la operacion: ");
	        scanf("%s", caracter);
	        infijo = caracter;
            printf("\n\t___________________________________");
            printf("\n\t               CONVERSION          ");
            printf("\n\t___________________________________\n");
	        printf("\n \tSu Prefijo es : %s", prefijo(infijo));
            getchar();getchar();
            break;
        case 3:
            break;
        default:
            break;
        }
    }while (opt!=3);
	 return 0;
}

void menu(){
    system("cls");
    printf("\n\t ______________________________\n");
    printf("\t|     MENU DE OPCIONES         |\n");
    printf("\t|______________________________|\n");
    printf("\t| 1)Infijo -> Postfijo         |\n");
    printf("\t| 2)Infijo -> Prefijo          |\n");
    printf("\t| 3)Salir                      |\n");
    printf("\t|______________________________|\n");
    printf("\t");
}