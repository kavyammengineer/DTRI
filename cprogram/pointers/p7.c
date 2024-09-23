#include<stdio.h>
int main()
{
    int a[2][2];
    int row,col;
    printf("enter the rows");
    scanf("%d",&row);
     printf("enter the col");
    scanf("%d",&col);

    int *p;
    for(p=&a[0][0];p<=&a[row-1][col-1];p++)
    {
        scanf("%d",*(&p));
    }
    //a[1][0]=50
    *(&p+2)=50;
    //p=&a[0][1];
    //*p=50;

    for(p=&a[0][0];p<=&a[row-1][col-1];p++)
    {
        printf("%d",*p);
    }

}


