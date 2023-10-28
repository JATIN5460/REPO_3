
#include<stdio.h>
void swap(int ,int,int,int );
int main(){

int a,b,c,d;
printf("enter the value of a and b\n");
scanf("%d %d %d %d",&a,&b,&c,&d);

swap(a,b,c,d);
printf("no swapped a= %d b=%d\n",a,b);





    return 0;
}
void swap(int x,int y,int u,int v ){
    int t;
    int z;
 t=x;
 x=y;
 y=t;
 z=u;
 u=v;
 v=z;
    printf("x=%d y=%d u= %d v=%d\n",x,y,u,v);
}