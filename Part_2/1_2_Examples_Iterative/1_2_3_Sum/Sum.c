#include <stdio.h>

long sum_iterative(long n);
int main(){
	long n;
  printf("Ingresar numero entero: ");
  scanf("%ld", &n);
	printf("Suma iterativa %ld\n", sum_iterative(n));
  return 0;
}

long sum_iterative(long n){
  long sum = 0, i;
	for (i = 1; i <= n; i++)
    sum += i;
	return sum;
}
