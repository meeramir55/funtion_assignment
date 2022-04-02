// swap two numbers without using 3rd variablre
#include<stdio.h>
int swap(int *x , int *y);
int main()
{
     int a,b;
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("enter the value of b \n");
    scanf("%d",&b);
    printf("value of a before swap=%d\nvalue of b before swap=%d\n",a,b);
    swap(&a,&b);
     printf("value of a after swap=%d\nvalue of b after swap=%d\n",a,b);
    return 0;
}
int swap(int *x , int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;    
}
