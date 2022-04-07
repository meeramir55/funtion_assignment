#include <stdio.h>
int compare(int i,int j)
{
if(i>j)
    {
        printf("%d is greater than %d \n",i,j);
    }
    else if(j>i)
    {
        printf("%d is greater than %d \n",j,i);
    }
    else
    {
        printf("%d is equal to %d \n",i,j);
    }
}
int reverse(int *x)
{
    int n1,n2,n3,n4,rnum,temp;
    temp=*x;
    n1=*x%10;
    *x=*x/10;
    n2=*x%10;
    *x=*x/10;
    n3=*x%10;
    *x=*x/10;
    n4=*x%10;
    *x=(((n4*10+n3)*10+n2)*10+n1);
    rnum=(((n1*10+n2)*10+n3)*10+n4);
    printf("reverse of 4 digit number=%d\n",rnum);
    compare(temp,rnum);

}



int main()
{
    int num;
     printf("enter the 4 digit number \n");
    scanf("%d",&num);
    reverse(&num);  
    return 0;
}