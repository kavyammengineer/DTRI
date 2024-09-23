#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the a:");
    scanf("%d",&a);
    printf("enter the b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d and b=%d",a,b);
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
