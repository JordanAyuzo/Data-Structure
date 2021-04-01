#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "stack.h"

int is_top(Pila *a){
    return a->array[a->top];
}
int is_empty(Pila *pil){
      if (pil->top ==-1){
        return 1;
    }else{
        return 0;
    }
}
int is_full(Pila *pil){
    if (pil->top == pil->size -1){
        return 1;
    }else{
        return 0;
    }
}
int precedence(char car){
    if (car == '(' || car == ')')
        return 4;
    else if (car == '*' || car == '/')
        return 3;
    else if (car == '+' || car == '-')
        return 2;
    else
        return 0;
}
int  is_operator(char car){
         if(car == '+' || car == '-' ||car == '*' || car == '/') 
        return 1;
    else
        return 0;
}
void push(Pila* pil, char care){
     if (is_full(pil))
        printf("\n ERROR No podemos mandar %d \n ", care);
    else
    {
        pil->top++;
        pil->array[pil->top] = care;
    }
}
char pop(Pila* pil){
    if (is_empty(pil)){
        printf("ERROR\n");
        return -1;
    }else{
        char care = pil ->array[pil->top];
        pil->top--;
        return care;
    }
}
char* postfijo(char* infijo){
     Pila * a = (Pila *) malloc(sizeof(Pila));
    a->size = 10; 
    a->top = -1;
    a->array = (char *) malloc(a->size * sizeof(char));
    char * postfijo = (char *) malloc((strlen(infijo)+1) * sizeof(char));
    int i = 0,j = 0; 
    while (infijo[i]!='\0'){
        if(!is_operator(infijo[i])){
            postfijo[j] = infijo[i];
            j++;
            i++;
        }else{
            if(precedence(infijo[i])> precedence(is_top(a))){
                push(a, infijo[i]);
                i++;
            }else{
                postfijo[j] = pop(a);
                j++;
            }
        }
    }
    while (!is_empty(a))    
    {
        postfijo[j] = pop(a);
        j++;
    }
    postfijo[j] = '\0';
   
    return postfijo; 
}
char*  prefijo(char * infijo){
    int i = 0,j = 0;
    char stack[50];
     Pila *  a = (Pila *) malloc(sizeof(Pila));
    a->size = 10; 
    a->top = -1;
    a->array = (char *) malloc(a->size * sizeof(char));
    char * prefijo = (char *) malloc((strlen(infijo)+1) * sizeof(char));
	char symbol;
	stack[++a->top] = '#';
	reverse(infijo);
    int n = strlen(infijo);
	for (i = 0;i < n;i++) {
		symbol = infijo[i];
		if (is_operator(symbol) == 0) {
			prefijo[j] = symbol;
			j++;
		} else {
			if (symbol==')') {
				push(a, symbol);
			} else if(symbol == '(') {
				while (stack[a->top]!=')') {
					prefijo[j]=pop(a);
					j++;
				}
				pop(a);
			} else {
				if (precedence(stack[a->top])<=precedence(symbol)) {
					push(a, symbol);
				} else {
					while(precedence(stack[a->top])>=precedence(symbol)) {
						prefijo[j]=pop(a);
						j++;
					}
					push(a, symbol);
				}
			}
		}
	}
	while (stack[a->top]!='#') {
		prefijo[j]=pop(a);
		j++;
	}
  prefijo[j]='\0';
  reverse(prefijo);
  return prefijo; 
}
char * reverse(char  array[30]){
	int i,j;
	char temp[100];
	for (i=strlen(array)-1,j=0;i+1!=0;--i,++j) {
		temp[j]=array[i];
	}
	temp[j]='\0';
	 strcpy(array,temp);
	return array;
}

