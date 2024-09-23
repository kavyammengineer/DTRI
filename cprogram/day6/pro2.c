#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)

    {
        for(k=0;k<i;k++)
            printf("  ");
          {
            for(j=5;j>=i;j--)
                {
                     printf("* ");
                }

            } printf("\n");
    }
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            printf("* ");
            {
                for(k=0;k<i-1;k++)
                    printf("  ");
            }
            printf("\n");
    }

}

