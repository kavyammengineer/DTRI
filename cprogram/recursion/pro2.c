
#include<stdio.h>
int factorial(int n);
int main()
{
    int n,res;
    printf("enter the number:");
    scanf("%d",&n);
    res=factorial(n);
    printf(" the value is %d",res);

}
int factorial(int n)
{int res;
    if(n<1)
        return 1;
    else
    {
res=n*factorial(n-1);
      return res;


    }
}
