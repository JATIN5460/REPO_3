#include<stdio.h>
int multiple(int n);

int main(){
    printf("the multiple of the number:%d\n",multiple(7));




    return 0;
}
int multiple(int n){
    for(int i=0;i<=10;i++){
        printf("%d\n",n*i);
    }
    return 'i';
}