/* Functions
  A function is a group of statements that together perform a task. Every C
program has at least one function, which is main(), and all the most trivial
programs can define additional functions.

  The general form of a function definition in C programming language is as
follows −

    return_type function_name( parameter list ) {
      body of the function
    }

  A function declaration tells the compiler about a function name and how to
call the function. The actual body of the function can be defined separately.
A function declaration has the following parts −

    return_type function_name( parameter list );
*/

#include <stdio.h>

int max(int num1, int num2);

int main() {
  int a = 100;
  int b = 200;
  int ret;

  ret = max(a,b);

  printf("Max value is: %d\n", ret);

  return 0;
}

int max(int num1, int num2) {
  int result;

  if (num1 < num2)
    result = num1;
  else
    result = num2;
  return result;
}
