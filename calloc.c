#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("enter the number\n");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));

    for(int i=0 ; i<n ;i++){

printf("%d",ptr[i]);

    }

    return 0;
}