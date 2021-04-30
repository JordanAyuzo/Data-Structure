#include <stdio.h>
#include <conio.h>
void hanoi_recursive(int n, char source,char destination,char auxiliary);
int main(){   
    hanoi_recursive(3,'A','B','C');
    getch();
}
void hanoi_recursive(int n, char source,char destination,char auxiliary){
    if(n==1){
        printf("Mover el disco %d de %c a %c \n",n,source,destination);
        return;
    }else {
        hanoi_recursive(6source,auxiliary,destination);
        printf("Mover el disco %d de %c a %c \n",n,source,destination);
        hanoi_recursive(n-1,auxiliary,destination,source);

    }
}