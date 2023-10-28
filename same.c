#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("new.txt","r");
    int n;
  fscanf(ptr,"%d",&n);
    printf("the numner 2:%d",&n);

    fscanf(ptr,"%d",&n);
    printf("the numner 3:%d",&n);

fscanf(ptr,"%d",&n);
    printf("the numner 4:%d\n",&n);

fscanf(ptr,"%d",&n);
    printf("the numner 5:%d\n",&n);

fscanf(ptr,"%d",&n);
    printf("the numner 6:%d\n",&n);

    fclose(ptr);

return 0;


}