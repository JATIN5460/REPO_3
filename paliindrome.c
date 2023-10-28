//program for the palindrrome
#include<Stdio.h>
int main(){
    int n,reversed,remainder,orignol,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    orignol=n;
    while (n>0)
    {
        remainder=n%10;
        sum=(sum*10)+remainder;
        n/=10;
    }
    if(orignol==sum)
    printf("it is an palindrome number");
    else
    printf("not an palindrome number");
    return 0;
}
