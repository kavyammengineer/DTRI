#include <stdio.h>
 void printLocalValues();

int global_int;
char global_char;
float global_float;
double global_double;

int main()
{
  printf("Global values:\n");
  printf("int: %d\n", global_int);
  printf("char: %c\n", global_char);
  printf("float: %f\n", global_float);
  printf("double: %lf\n", global_double);
  printLocalValues();
  return 0;
}
void printLocalValues()
{
  int local_int;
  char local_char;
  float local_float;
  double local_double;

  printf("Local values:\n");
  printf("int: %d\n", local_int);
  printf("char: %c\n", local_char);
  printf("float: %f\n", local_float);
  printf("double: %lf\n", local_double);
}

