#include<stdio.h>
int swap(int *x,int *y);
int main()
{
    int a=10,b=20,sum;
    sum=swap(&a,&b);
    printf(" the value %d",sum);
    return 0;
}
int swap(int *x,int *y)
{
    int sum;
    sum=*x+*y ;
    return sum;

}
