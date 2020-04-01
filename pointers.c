#include <stdio.h>

void swap (char *num1, char *num2);

int main (int argc, char *argv){
  char x = argv[1];
  char y = argv[2];

  printf("x is %d, y is %d\n", x, y);
  swap (&x,&y);
  printf("x is %d, y is %d\n", x, y);
  return 0;
}
void swap (char *num1, char *num2){
  char temp;
temp = *num1;
*num1 = *num2;
*num2 = temp;
}
