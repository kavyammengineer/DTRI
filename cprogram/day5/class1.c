#include<stdio.h>
int main()
{
    int a;
    printf(" enter the temp:");
    scanf("%d",&a);
    if((a>50)&&(a<60))
        printf("extremely hot");
    else if((a>40)&&(a<50))
    printf("very hot");
    else if((a>30)&&(a<40))
    printf("hot");
    else if((a>20)&&(a<30))
    printf("cool");
    else if((a>10)&&(a<20))
    printf("very cold");
    else if((a<10)&&(a>0))
    printf("extremely cold ");
    else
        printf("wrong input");
}
