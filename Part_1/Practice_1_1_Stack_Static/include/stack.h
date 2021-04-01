struct pila
{
    int size;
    int top;
    char *array;
};

typedef struct pila Pila;

int is_top(Pila *a);
int is_empty(Pila *pil);
int is_full(Pila *pil);
int precedence(char car);
int is_operator(char car);
void push(Pila* pil, char care);
char pop(Pila* pil);
char* postfijo(char* infijo);
char*  prefijo(char * infijo);
char * reverse(char array[30]);