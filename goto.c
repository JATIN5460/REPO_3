#include <stdio.h>

int main()
{
   int x = 10;
   if (x < 5)
      goto label;
   printf("This line will not be executed\n");
   label:
   printf("This line will be executed:%d\n",x);
   return 0;
}
