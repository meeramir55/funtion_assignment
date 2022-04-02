//area and perimeter of rectangle :
#include<stdio.h>
int area(int i,int j);
int perimeter(int x,int y );
int main()
{
    int length,breadth;
    printf("enter the length of rectangle \n");
    scanf("%d",&length);
    printf("enter the breadth of rectangle \n");
    scanf("%d",&breadth);
    printf("area of the rectangle =%d\n",area(length,breadth));
    printf("perimeter of the rectangle = %d\n",perimeter(length,breadth));
    return 0;
}
int area(int i , int j)
{
    int area ;
    area=i*j;
}
int perimeter(int x,int y )
{
    int perimeter;
    perimeter= 2*(x+y);

}