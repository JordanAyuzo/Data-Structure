typedef struct ElementoLista{ 
	char *dato; 
	struct ElementoLista *siguiente;
}Elemento;
typedef struct ListaUbicacion{
	Elemento *inicio;
	int tamano;
} Pila;
void inicializacion (Pila *tas);
int apilar (Pila *tas, char *dato);
int desapilar (Pila *tas);
#define pila_dato(tas) tas->inicio->dato
void muestra (Pila *tas,Pila * historial_hora,int *num);