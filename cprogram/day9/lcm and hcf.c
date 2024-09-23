#include<stdio.h>
int gcdofnumber(int a,int b);
int main()
{
    int a,b,res,final;
    printf("enter the value of a:");
    scanf("%d",&a);
     printf("enter the value of b:");
    scanf("%d",&b);
    res=gcdofnumber( a,b);
    final=(a*b)/res;
    printf(" the value of gcd is %d",final);

}
int gcdofnumber(int a,int b)
{
    if(a<b)
    {
        return gcdofnumber(b,a);
    }

    else if(a%b==0)
    {
        return b;
    }

    else
    {
      return gcdofnumber(a,a%b);
    }

}

