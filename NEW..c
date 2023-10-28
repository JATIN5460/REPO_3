#include<stdio.h>
typedef struct bankaccount{
    int account;
    char name[100];
}acc;

int main(){
   acc  acc1 ={342221,"JATIN JASROTIA"};
   acc  acc2 ={43422,"ragini"};
   acc aa={2324323,"raghu"};

   printf("the account number:%d\n",acc1.account);
   printf("the nAme of the person:%s",acc1.name);
    
    
}