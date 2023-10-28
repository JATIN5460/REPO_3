#include<stdio.h>
int main(){

int branch_code;

    printf("it is IT");
printf("enter the beanch code\n");
printf("enter 1 for cs=\n");
printf("2 for it=\n");
printf("3 for civil=\n");

scanf("%d",&branch_code);

if(branch_code==1){
    printf("CS");
}
else if(branch_code==2){
    printf("it is IT");
}
else if(branch_code==3){
    printf("it is CIVIL");
}

else{
    printf("enter the proper branch code");

}
















    return 0;
}