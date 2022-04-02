//find the revrese of any number
#include<stdio.h>
int reverse(int *n)
{
int r,rev=0;

    while (*n !=0)
    {
        r = *n % 10; 
        rev=rev*10+r;
        *n=*n/10;


    }
    printf("reverse number = %d \n",rev);

}
int main()
{
    int  num;
    printf("enter the number \n");
    scanf("%d",&num);
    reverse(&num);
    return 0;

}