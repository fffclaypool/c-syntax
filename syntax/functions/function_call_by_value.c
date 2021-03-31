/* Function call by Value in C
  The call by value method of passing arguments to a function copies the actual
value of an argument into the formal parameter of the function. In this case,
changes made to the parameter inside the function have no effect on the argument.
*/

#include <stdio.h>

void swap(int x, int y);

int main () {
  int a = 100;
  int b = 200;

  printf("Before swap, value of a : %d\n", a );
  printf("Before swap, value of b : %d\n", b );

  swap(a,b);

  printf("After swap, value of a : %d\n", a );
  printf("After swap, value of b : %d\n", b );

  return 0;
}

void swap(int x, int y) {
  int temp;

  temp = x;
  x = y;
  y = temp;

  return;
}
