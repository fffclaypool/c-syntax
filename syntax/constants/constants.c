/* Constants
  Constants refer to fixed values that the program may not alter during its
execution. These fixed values are also called literals. Constants can be of
any of the basic data types like an integer constant, a floating constant, a
character constant, or a string literal. There are enumeration constants as
well. Constants are treated just like regular variables except that their
values cannot be modified after their definition.

  There are two simple ways in C to define constants −

    Using #define preprocessor.
    Using const keyword.
*/

#include <stdio.h>

#define LENGTH_X 10
#define WIDTH_X 5
#define NEWLINE_X '\n'

void define_preprocessor();
void const_keyword();

int main() {
  define_preprocessor();
  const_keyword();

  return 0;
}

void define_preprocessor() {
  int area;

  area = LENGTH_X * WIDTH_X;

  printf("value of area: %d", area);
  printf("%c", NEWLINE_X);
}

void const_keyword() {
  const int LENGTH_Y = 10;
  const int WIDTH_Y = 5;
  const char NEWLINE_Y = '\n';
  int area;

  area = LENGTH_Y * WIDTH_Y;

  printf("value of area: %d", area);
  printf("%c", NEWLINE_Y);
}
