/* >> Este es el primer ejemplo practico de la "Iteratividad" */ 
#include <stdio.h>

long fibonacci(long posicion, int imprimir);

long fibonacci(long posicion, int imprimir){
  long x, siguiente = 1, actual = 0, temporal = 0;
  for (x = 1; x <= posicion; x++) {
    if (imprimir)
      printf("%ld, ", actual);
      temporal = actual;
      actual = siguiente;
      siguiente = siguiente + temporal;
    }
    if (imprimir)
      printf("%ld", actual);
  return actual;
}
int main(){
	fibonacci(20, 1);
	unsigned long fibonaccid = fibonacci(10, 0);
	printf("\nFibonacci de 10 es: %ld", fibonaccid);
}
