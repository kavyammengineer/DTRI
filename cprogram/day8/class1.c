#include<stdio.h>
int add(int,int);

int main()
{
    int a,b,res;
    printf("enter the 2 value:");
    scanf("%d%d",&a,&b);
    res=add(a,b);
    printf("%d",res);
}
 int add(int a,int b)
 {
     return a+b;
 }

