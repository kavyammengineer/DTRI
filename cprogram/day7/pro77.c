#include<stdio.h>
#include<math.h>

int main()
{
    int num,n,ori,count=0,rem=0,sum=0;
    printf(" enter the number");
    scanf("%d",&num);
    n=num;
    ori=num;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    n=ori;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    if(ori==sum)
        printf(" the number is armstrong");
    else
        printf(" the number is not armstrong");

}
