/* Function call by Value in C
  The call by reference method of passing arguments to a function copies the address
of an argument into the formal parameter. Inside the function, the address is used
to access the actual argument used in the call. It means the changes made to the
parameter affect the passed argument.
*/

#include <stdio.h>

void swap(int *x, int *y);

int main () {
  int a = 100;
  int b = 200;

  printf("Before swap, value of a : %d\n", a );
  printf("Before swap, value of b : %d\n", b );

  swap(&a,&b);

  printf("After swap, value of a : %d\n", a );
  printf("After swap, value of b : %d\n", b );

  return 0;
}

void swap(int *x, int *y) {
  int temp;

  temp = *x;
  *x = *y;
  *y = temp;

  return;
}
