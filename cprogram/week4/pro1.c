#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    int ori=a;
    int sum=0;
    a=(a>=0)?(a):-a;
    while(a!=0)
    {
    int rem=a%10;
      sum=sum*10+rem;
    a=a/10;
    }
    if(sum==ori)
        printf(" the number is palindrome");
    else
        printf(" the number is not a palindrome");
    getchar();
    return 0;

}
