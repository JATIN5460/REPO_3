#include<stdio.h>
#include<stdlib.h>
int main(){

float *ptr;
ptr=(float*)malloc(5 * sizeof(float));


ptr[0]=4;
ptr[1]=5;
ptr[2]=54;
ptr[3]=33;
ptr[4]=55;


for(int i=0;i<5;i++){
    printf("%f",ptr[i]);
}










return 0;
}