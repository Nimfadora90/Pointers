#include <stdio.h>
#include <stdlib.h>

void swap (int *num1, int *num2);

int main (int argc, char *argv[]){
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);

  printf("x is %d, y is %d\n", x, y);
  swap (&x,&y);
  printf("x is %d, y is %d\n", x, y);
  return 0;
}

void swap (int *num1, int *num2){
  int temp;
  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}
