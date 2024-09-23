
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the value of y");
    scanf("%d",&y);
    if((x>0)&&(y>0))
    printf("first quadrant");
    else if((x<0)&&(y>0))
    printf("second quadrant");
    else if((x<0)&&(y<0))
        printf("third quadrant");
    else
        printf("fourth  quadrant");

}
