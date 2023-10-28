
#include<stdio.h>
#include<math.h>
int main(){

float a,b,c,area,si;
printf("enter the sides a,b and c respectively:\n");
scanf("%f %f %f",&a,&b,&c);
si=a+b+c/2;
area=sqrt(si*(si-a)*(si-b)*(si-c));

printf("%f the sum of the sides of the triangle and area of the trainge %f",si,area);




    return 0;
}