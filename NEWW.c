#include<stdio.h>
int main(){

FILE *gptr;
gptr=fopen("new.txt","w");

char ch;
ch=fgetc(gptr);
while(ch != EOF){

    printf("%c", ch);
    ch=fgetc(gptr);
}

printf("\n");

fclose(gptr);
















    return 0;
}