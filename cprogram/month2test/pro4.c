#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter the number of numbottle:");
    scanf("%d",&n);
    int bottle=n;
    int e;
    printf("enter the number of numexchange:");
    scanf("%d",&e);
    //n=(n%2==0)?n+1:n;
    while(n>=e)
    {
        int t;

        t=n/e;
        count=count+t;
        n=t+(n%e);
    }
    printf("%d",count+bottle);
}
