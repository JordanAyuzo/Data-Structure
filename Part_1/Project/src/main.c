#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<limits.h>
#include<string.h>
#include<time.h>
#include "include.h"
int main (){
    time_t tAct = time(NULL);
    int opt,in=0;
    Pila *tas;
    Pila *historial;
    Pila *pila2;
    Pila *historial_hora;
    char *nom,*registro;
    if ((tas = (Pila *) malloc (sizeof (Pila))) == NULL)
        return -1;
    if ((nom = (char *) malloc (500 * sizeof (char))) == NULL)
        return -1;
    if ((registro= (char *) malloc (500 * sizeof (char))) == NULL)
        return -1;
    if ((historial_hora = (Pila *) malloc (sizeof (Pila))) == NULL)
        return -1;    
    if ((historial = (Pila *) malloc (sizeof (Pila))) == NULL)
        return -1;
    if ((pila2 = (Pila *) malloc (sizeof (Pila))) == NULL)
        return -1;
    inicializacion (tas);
    inicializacion (pila2);
    inicializacion (historial);
    inicializacion(historial_hora);
    do{
        system("cls");
        printf("\t===============================================\n");
        printf("\t===============================================\n");
        if (in==0){
        printf("\t     Bienvenido a Tu Navegador Duck Duck\n ");
        in =1;
        }
        else
        printf ("\t estas en la pagina: %s \n",pila_dato(tas));
        printf("\t===============================================\n");
        printf("\t   1)  Nueva Pagina\n");
    	printf("\t   2)  Pagina Anterior\n");
    	printf("\t   3)  Pagina Siguiente\n");
    	printf("\t   4)  Mirar Historial\n");
        printf("\t   5)  Borrar Historial\n");
    	printf("\t   6)  Salir\n");
        printf("\t===============================================\n");
        printf("\t===============================================\n");
    	printf("\t   >> Ingresar Una Opcion: ");
    	scanf("%d", &opt);
       switch (opt){
            case 1: 
                system("cls");
                printf("\t===============================================\n");
                printf("\t===============================================\n");
                printf ("\t >> Ingrese una palabra: ");
                fflush(stdin);
                scanf ("%s", nom);
                apilar (tas, nom);
                apilar(historial,nom);
                tAct = time(NULL);
                registro=asctime(localtime(&tAct));
                apilar(historial_hora,registro);
                break;
            case 2:
                system("cls"); 
                 nom = pila_dato(tas);
                apilar(pila2,nom);
                desapilar(tas);
                nom = pila_dato(tas);
                tAct = time(NULL);
                registro=asctime(localtime(&tAct));
                apilar(historial_hora,registro);
                apilar(historial,nom);
                break;
            case 3:
                system("cls");
                nom = pila_dato(pila2);
                apilar(tas,nom);
                tAct = time(NULL);
                registro=asctime(localtime(&tAct));
                printf("%s",nom);
                apilar(historial,nom);
                apilar(historial_hora,registro);
                desapilar(pila2);
                break;
            case 4:
                system("cls");
                printf("\t===============================================\n");
                printf("\t===============================================\n");
                muestra(historial,historial_hora,&in);
                printf("\t===============================================\n");
                printf("\t===============================================\n");
                getch();
                break;
            case 5:
                inicializacion (historial);
                inicializacion (historial_hora);
                inicializacion (tas);
                inicializacion (pila2);
                in=0;
                system("cls");
                printf("\t===============================================\n");
                printf("\t===============================================\n");
                printf("\t          El Historial Ha sido Borrado\n");
                printf("\t===============================================\n");
                printf("\t===============================================\n");
                getch();
                break;
            case 6:
                break;
            default:
                printf("Opcion no valida\n");
       }
    } while(opt != 6);
}
 