//adding 1 to every digit of a 5 digit number 
#include<stdio.h>

int add(int *n)
{
    int n1,n2,n3,n4,n5;
    n5=*n%10;
    if (n5==9)
        n5=0;
    else
        n5++;
    *n=*n/10;

    n4=*n%10;
     if (n4==9)
        n4=0;
    else
        n4++;
    *n=*n/10;

    n3=*n%10;
     if (n3==9)
        n3=0;
    else
        n3++;
    *n=*n/10;

    n2=*n%10;
     if (n2==9)
        n2=0;
    else
        n2++;
    *n=*n/10;
     
    n1=*n%10;
     if (n1==9)
        n1=0;
    else
        n1++;
    printf("%c after add 1 to every digit =%d%d%d%d%d",n,n1,n2,n3,n4,n5);
}
int main()

{
    int num;
    printf("enter the 5 digit number \n");
    scanf("%d",&num);
    add(&num);
    return 0;
}
