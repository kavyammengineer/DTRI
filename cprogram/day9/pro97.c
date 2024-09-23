#include <stdio.h>

void printValues();
int main()
{
  printValues();
  return 0;
}
void printValues()
 {
  int int_var;
  char char_var;
  float float_var;
  double double_var;

  printf("int: %d\n", int_var);
  printf("char: %c\n", char_var);
  printf("float: %f\n", float_var);
  printf("double: %lf\n", double_var);
}


