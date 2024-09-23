#include<stdio.h>
void rootofthe_number(int num,int n);
int main()
{
    int num,n;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the n root:");
    scanf("%d",&n);
    rootofthe_number( num, n);
    getchar();
    return 0;

}
void rootofthe_number(int num,int n)
{
int ori=num;
    int sum=1,i,rem;
    float res;
    for(i=1;i<=n;i++)
    {
        sum=sum*n;
    }
    if(sum==num)
    {
      printf(" the root lies %d ",n);
    }
    else
    {
        rem=num-sum;
        ;
        printf(" the root  is lies %f",res);
    }

}

