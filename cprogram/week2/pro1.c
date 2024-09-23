#include<stdio.h>
int bittocheck(int n,int b);
int main()
{
    int a,b,res;
    printf(" enter the number:");
    scanf("%d",&a);
    printf(" enter the bit to check:");
    scanf("%d",&b);
    res=bittocheck(a,b);
    if(res==1)
    {
        printf(" the bit is set");

    }
    else
    {
        printf("the bit is not set");
    }
}
int bittocheck(int n,int b)
{
      int res;
      res=(1)&(n>>b-1);
     return res;
}
