#include<stdio.h>
int main()
{
    int a=5;
    int *p1 =&a;
    int num1=*p1;
    int **p2=&p1;
    printf(" the value of the p1=%p\n*p1=%d\nnum1=%d\np2=%p\n*p2=%p\n**p2=%d\n",p1,*p1,num1,p2,*p2,**p2);
    getchar();
    return 0;
}
