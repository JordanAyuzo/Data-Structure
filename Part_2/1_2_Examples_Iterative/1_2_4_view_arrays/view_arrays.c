#include <stdio.h>

void display_iterative(int num[], int size);

int main(){
  int numbers[] = {1, 2, 3, 4, 5};
  display_iterative(numbers, 5);
  return 0;
}
void display_iterative(int num[], int size){
  int i;
	for (i= 0; i < size; i++)
    printf("%d ",num[i]);
  printf("\n");
}
