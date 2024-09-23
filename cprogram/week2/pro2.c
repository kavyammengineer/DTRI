#include<stdio.h>
void prime(int n);
flag=1;
int main()
{
    int n;
    printf(" enter the number");
    scanf("%d",&n);
    prime( n);
    if(flag==0)
        printf(" the number is  not prime");
    else
    {
        printf(" the number is  prime");
    }

}
void prime(int n)

{
    int i;
    for(i=2;i<=n/2;i++)
        if(n%2==0)
        {
           flag=0;
        }

}




