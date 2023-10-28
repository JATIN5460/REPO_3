#include<stdio.h>
#include<math.h>

void swap(int *,int *);
//main function
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("new swap:%d newswap2:%d",a,b);




    return 0;
}
void swap(int *x,int *y){
    //declaring an temprature variable to strore the value and then calling the function with the help of the main function
    //which has been declared on the beginning
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("orignol :%d orignol2:%d",x,y );
}
