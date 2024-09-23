
#include<stdio.h>
int main()
{
    char arr[2][3]={'a','b','c','d','e','f'};
    int i,j;
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
            printf("%c ",arr[i][j]);
             printf("\n");
    }

    return 0;

}
