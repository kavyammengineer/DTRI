
#include<stdio.h>
int add(int,int);
int mul(int a,int b);

int main()
{
    int a,b,res,resmul;
    printf("enter the 2 value:");
    scanf("%d%d",&a,&b);
    res=add(a,b);
    resmul=mul(a,b);
    printf("%d\n%d\n",res,resmul);
}
 int add(int a,int b)
 {
     mul(a,b);
     return a+b;

 }
 int mul(int a,int b)
 {
     return a*b;
 }
