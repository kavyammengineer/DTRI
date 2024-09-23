#include<stdio.h>
int display(int n);
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    display(n);

}
int display(int n)
{
    if(n<1)
        return 1;
    else
    {
        printf("%d",n);
        display(n-1);
        printf("%d",n);

    }
}
