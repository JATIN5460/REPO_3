#include<stdio.h>
int calctemp(int n,int far);
//main function//
int main(){
    printf("enter the temprature of the room\n");
    printf("%d",calctemp(67));







    return 0;
}
int calctemp(int n ,int far){
far=5/9*n+32;

return far;

}