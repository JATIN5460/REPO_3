#include<Stdio.h>
int main(){

int num[100]={4,5,5,43,544,45};
int i,*ptr;
ptr=&num[100];
for(i=0;i<=6;i++);
printf("the address %u element %d,",ptr,*ptr);
ptr++;









    return 0;
}