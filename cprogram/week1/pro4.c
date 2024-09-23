
#include<stdio.h>
int main()
{
    int n,b,res;
    printf("enter the value");
    scanf("%d",&n);
    printf("enter the bit position");
    scanf("%d",&b);
    res=(n|(1<<(b-1)));
    printf("the value is %d",res);



}
