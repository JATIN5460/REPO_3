#include<stdio.h>
int main(){
    int n;
    printf("enter the marks\n");
    scanf("%d",&n);

    if(n>=80 && n<=90){
        printf("YOU WILL GET THE SCHOLARSHIP:%d",n);
    }

    if(n>=70 && n<=80){
        printf("you will get 1000 ruppess price%d\n,",n);
    }
    else if 
    (n==60){
        printf("you will get nothing");
    }
    else{
        printf("better luck next time\n");
    }

    return 0;
}