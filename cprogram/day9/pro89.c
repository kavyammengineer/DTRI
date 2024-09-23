#include<stdio.h>
int factorial(int);
int main()
{
   int a,res;
   printf("enter the number:") ;
   scanf("%d",&a);
   res=factorial( a);
   printf("the value is %d\n",res);
}
int factorial(int a)
{
    if(a==1)
        return 1;
    else
        return a*factorial(a-1);
}
