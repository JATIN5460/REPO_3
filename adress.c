#include <stdio.h>
int main()
{
  int var = 56;
  printf("var: %d\n", var);

  // Notice the use of & before var
  printf("address of var: %u", &var);  
  return 0;
}