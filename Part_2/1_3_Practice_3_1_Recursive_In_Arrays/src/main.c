#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
# include "include.h"
void menu();
int main(){
	int account = 0 ,option, data, array[20]={0};
	do{
        menu();
		scanf("%d",&option);
		switch(option){
			case 1: add(&account,array);
                    break;
			case 2: system("cls");
                    data = 0;
                    printf("\n\n=======================================\n");
				    printf("  >> La Suma Es : %d\n",sum(account,&data,array));
                    printf("=======================================\n");
					getch();
                    break;
			case 3: system("cls");
                    printf("\n\n=======================================\n");
                    if (account ==0)
                    {
                        printf("  >> No Hay Elementos. \n");
                        printf("=======================================\n");
                        getch();
                    }else{
                        printf("      >>LISTA DE ELEMENTOS\n");
                        printf("=======================================\n");
                        look((account-1),array);
                        printf("=======================================\n");
					    getch();
                    }
                    break;
			case 4: break;
            default:system("cls");
                    printf("\n\n=======================================\n");
                    printf("        >> Opcion Invalida. \n");
                    printf("=======================================\n");
                    getch();
		}
	}while(option != 4);
}
void menu(){
        system("cls");
        printf("\n\n\t==========================\n");
    	printf("\t||   Menu de Opciones   ||\n");
        printf("\t==========================\n");
        printf("\t||  1.- Insertar        ||\n");
		printf("\t||  2.- Sumar           ||\n");
		printf("\t||  3.- Mostrar         ||\n");
        printf("\t||  4.- Salir           ||\n");
        printf("\t==========================\n");
        printf("\t==========================\n");
        printf("\t  >> Ingresar Opcion: ");
}