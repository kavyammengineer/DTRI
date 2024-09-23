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
    if(((a+b)>=c)&&((b+c)>=a)&&((c+a)>=b))
        printf(" triangle  can be formed");
    else
        printf(" triangle can not be formed");
}
