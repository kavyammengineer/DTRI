#include<stdio.h>
int main()
{
    int i,j,k,a=1;

    for(i=1;i<=5;i++)
    {
        for(k=4;k>=i;k--)
            printf("  ");
            {
                for(j=0;j<i;j++)
                    printf("  %c",++a+64);
            }
            printf("\n");
    }

}
