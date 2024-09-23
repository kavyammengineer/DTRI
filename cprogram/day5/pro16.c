#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the side a");
    scanf("%d",&a);
     printf("enter the side b");
    scanf("%d",&b);
     printf("enter the side c");
    scanf("%d",&c);
    if((a==b)&&(b==c))
        printf(" equivalent");
    else if((a==b)||(b==c)||(c==a))
        printf("isosceles");
    else
        printf("scalene");

}
