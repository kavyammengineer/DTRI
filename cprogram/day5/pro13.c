
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the number");
    scanf("%d",&b);
    printf("enter the number");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
              printf(" a in largest");
        }
        else
            {
            printf("c is largest");
        }

    }
    else if(b>a)
        printf("b is max");
    else
        printf(" c is max");

}
