#include<stdio.h>
int main()
{
    int n,b,fun,res;
    printf("enter the number:");
    scanf("%d",&n);
     printf("enter the bit :");
    scanf("%d",&b);
    printf("enter the function:");
    scanf("%d",&fun);
    switch(fun)
    {
        case 1:res=n^(1<<b);
               printf(" the toggle %d",res);
               break;
        case 2:res=n|(1<<b);
               printf("%d",res);
               break;
        case 3:res=n&(~(1<<b));
               printf("%d",res);
               break;
        case 4:res=n&(1<<b);
                if(res)
                {
                    printf("the bit is set");
                }
               else
                {printf("the bit is not  set"); }
               break;

        default:
        {
            printf("function is not correctly selected:");
        }

    }
    return 0;
}
