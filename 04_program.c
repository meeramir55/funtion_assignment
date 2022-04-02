#include<stdio.h>
int add(int *x)
{
int rem,sum=0;
 while (*x!=0)
    {
        rem=*x%10;
        sum=sum+rem;
        *x=*x/10;

    }
    printf("the sum of the digit of input number =%d \n",sum);

}
int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    add(&num);
    return 0;
}