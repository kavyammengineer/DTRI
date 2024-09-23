#include<stdio.h>
 int palidrome(int num);
int main()
{
    int num,rev;
    printf("enter the number :");
    scanf("%d",&num);
    rev=palidrome( num);
    if(num==rev)
    {
        printf(" the value is palindrome");
    }
    else
        {
        printf(" the value is not palindrome");
        }


}
int palidrome(int num)
{
    int rev,sum;
    while(num!=0)
    {
        rev=num%10;
        sum=sum*10+rev;
        num=num/10;
    }
    return sum;
}

