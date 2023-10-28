#include <stdio.h>

int main()
{
   int num[40],i;
   for(i=0;i<=99;i++){
    printf("%d",i);
   }
   printf("enter the number\n");
   scanf("%d",&num[0]);

   printf("the new product:%d",num[0]*89);
   //brain
   printf("the new story:");
   scanf("%d",&num[1]);
   if (num[1]==90)
   {
    /* code */printf("good iq");
   }
   else if (num[1]<90)
   {
    /* code */printf("nice job");
   }
   else
   {
    /* code */num[1]++;
   }
   
  
   
    return 0;
}

