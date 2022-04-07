//armstrong or not 
#include<stdio.h>
#include<math.h>
int armstrong(int *n)
{
    int n2,num=0,r,rem,x=0,count=0;
    n2=*n;
    while(*n!=0)
    {
        r=*n%10;
        num=num*10+r;
        *n=*n/10;
        count++;
    }
    while(num!=0)
    {
        rem=num%10;

        x=x+pow(rem,count);

        num=num/10;   
    }

   if(x==n2)
   {
       printf("the entered number is a armstrong number \n");
   }
   else
   {
       printf("the entered number is not a armstrong number \n");
   }
}
int main()
{   
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    armstrong(&n);
    return 0;
} 