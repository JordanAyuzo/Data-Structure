#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "include.h"

void add(int *account, int array[]){
    system("cls");
    if (*account <20){
        printf("\n\n=============================");
        printf("\n  >> Ingresar un numero: ");
        scanf("%d",&array[*account]);
	    (*account)++;
    }else{
        printf("\n\n=========================\n");
        printf(">> Espacio Insuficiente\n");
        printf("=========================\n");
        getch();
    }
}
int sum(int account,int *data ,int array[]){
    if(account == 0){
        (*data)+=array[0];
        return *data;
    }else{
		(*data)+=array[account];
		sum((account-1),&*data, array);
		return *data;
    }
}
void look (int account,int array[]){
    if(account == 0)
    	printf("Numero: %5d = %5d\n",(account + 1) ,array[0]);
    else{
		printf("Numero: %5d = %5d\n",(account+1) ,array[account]);
		look((account-1), array);
    }
}