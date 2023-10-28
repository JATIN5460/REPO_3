#include<stdio.h>
int main(){
FILE *ptr;
ptr =fopen ("NEnew.txt","w");
if (ptr==NULL)
{
    printf("the file doesnot exist");
    /* code */
}else{
    printf("the file of the function do exist");
}


fclose(ptr);

char c='c';
printf("the escii value of the keyword will be:%u",c);

}