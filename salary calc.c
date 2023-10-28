#include<stdio.h>
int main(){
float da,bp,gpay,hra;
printf("enter the value of the bp:");
scanf("%f",&bp);
da=0.4*bp;
hra=0.2*bp;
gpay=da+hra+bp;

printf("the basic pay of the person:%f",bp);
printf("the daerness allwowance of the person:%f",da);
printf("the house rent allownce of the person:%f",hra);
printf("the total salary of the person:%f",gpay);

return 0;

}