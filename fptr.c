#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("new.txt","r");

char g;
fscanf(fptr,"%c",&g);
printf("the ist value of the file is as follows which will be: %c\n",g);

fclose(fptr);


    return 0;
}