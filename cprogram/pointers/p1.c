#include<stdio.h>
int main()
{
    int a[2][2]={{1,2},{3,5}};
    int row,col;
    printf("enter the rows");
    scanf("%d",&row);
     printf("enter the col");
    scanf("%d",&col);

    int *p;
    for(p=&a[0][0];p<=&a[row-1][col-1];p++)
    {
        printf("%d",*p);
    }


}
