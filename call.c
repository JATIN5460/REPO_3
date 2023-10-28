#include<stdio.h>
//factorial of the number
//formal parameter//aka declaration of the function
int fact(int);

int main(){
int num,factorial=1;
printf("enter your desired number:");
scanf("%d",&num);
factorial=fact(num);
printf("the factorial of the number%dis:%d ",num,factorial);



    return 0;
} 
int fact(int num){
int i;
int factorial;
factorial=1;
//use the for loop//ansi-american national standrad institute
for(i=1;i<=num;i++){
    factorial=factorial*i;
}
return(factorial);

}