#include <stdio.h>

long sum_recursive(long n);

int main(){
    long n;
    printf("Ingresar numero entero: ");
    scanf("%ld", &n);
    printf("Suma recursiva %ld\n", sum_recursive(n));
    return 0;
}
long sum_recursive(long n){
    if (n == 1)
        return 1;
    else
        return n + sum_recursive(n - 1);
}
