#include<stdio.h>
void fun1(int n,int N);
int main()
{
    int n,N;
    printf("enter the start number:");
    scanf("%d",&n);
    printf("enter the end number:");
    scanf("%d",&N);
    fun1(n,N);
}
void fun1(int n,int N)
{
    int i,j;
      for(i=n;i<=N;i++)
    {
        int flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
            }
        }
        if(flag)
        {
            printf("%d ",i);
        }
    }
}

