//program in c to check the switch statement//
#include<stdio.h>
int main(){

    int day=4;
    switch (day)//take care of the terminator//
    {
    case 1://case will intialise the values//there can be n no of the cases//you can choosee to change*/
    printf("it is the monday\n");
       
        break;
        case 2:
        printf("it is tuesday\n");
        break;

        case 3:
        printf("it is wednesday\n");
        break;//it is last statemnt and after that the execution of the bcode will stop//

        case 4:
        printf("this is an wrong case\n");
        printf("the value may not exist in this case\n");
        break;


    
    default:
    printf("these are not the days of the week");
        break;
    }



    return 0;
}