#include<stdio.h>
int main(){
int n,m;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("enter the number m\n");
    scanf("%d",&m);

    if(n==0){
        printf("the numbers equals to zero");
    }

    else if (n<0)
    {
        /* code */printf("the negative number\n");
    }
    else if(n==m){
        printf("both the numbers are the equal\n");
    }
    else if(n<=m){
        printf("n is less than or equal to m\n");
    }
    else if(n*m % 2=0){
        printf("the product of m and n is even");
    }
    else if(n*m !% = 0){
        printf("null");
    }

    else{
        printf("it is an positive number\n");
    }
    









    return 0;
}