//to check the frequency of the number in the array//
#include<stdio.h>
int main(){
    int num[]={3,4,5,43,32,22,444,22,44,44,44,44,44,32,43,44,55,44};
    int n,i,count;
    printf("enter an number of your choice\n");
    scanf("%d",&n);
    count=0;
    for(i=0;i<=17;i++)
    {

        if(num[i]==n)
        count++;
    }
    printf("number %d is fount %d times",n,count);
    return 0;
    
}