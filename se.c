#include<stdio.h>
int main(){
char ch;
int a,b;
printf("enter any value \n");
scanf("%c",&ch);
scanf("%d %d",&a,&b);

switch (ch)
{
case 'A':
printf("IT IS TODAY");
    break;
    case 'B':
    printf("it is tuesday\n");
    break;
    case 'M':
    printf("the multipication:%d",a*b);
    break;
    case 'D':
    printf("the divison of the numbers:%d",a/b);



default:
printf("operation terminated finally");
    break;
}





}