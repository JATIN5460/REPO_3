#include<stdio.h>
int main(){
    int n;
    printf("enter your desirenumber\n");
    scanf("%d",&n);
    //use for loop for fetching data
    //till infinity
    int i,c=0;
    for(i=1;i<=n;i++){
        if(n%i==0)
        c++;
    }
    if(c==2){
        printf("%d is an prime numer",n);

    }
    else
    printf("not an prime number");
}