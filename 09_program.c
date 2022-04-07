#include<stdio.h>
int num(int i)
{
    if(i%3==0 && i%5==0)

        {
            printf("obdureinfotech : ");
        }
        else if (i%3==0)
        {
            printf("obdure : ");
        }
        else if(i%5==0)
        {
            printf("infotech : ");
        }
        else 
        {
        printf("%d : ",i);
        }
}
int main()
{
    int i;
    for (i=1;i<=100;i++)
    num(i);
    return 0;
}