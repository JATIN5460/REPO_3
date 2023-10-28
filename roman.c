#include<Stdio.h>
int main(){
int num;
printf("enter the number from your keyword\n");
scanf("%d",&num);
if(num<=1000){
    printf("M");
    num-=1000;
}
else if (num<=900)
{
    printf("lx");
    num-=900;
}




}