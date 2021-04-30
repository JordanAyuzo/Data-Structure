#include <stdio.h>

long fibonacciRecursivo(long posicion);

long fibonacciRecursivo(long posicion){
	long z = fibonacciRecursivo(posicion - 1) + fibonacciRecursivo(posicion - 2);
	printf("z= %ld \n",z);
  if (posicion < 2)
    return posicion;
  return fibonacciRecursivo(posicion - 1) + fibonacciRecursivo(posicion - 2);

}

int main(){
	unsigned long fibonacciDe10 = fibonacciRecursivo(10);
	printf("Fibonacci de 10 es: %ld", fibonacciDe10);
}
