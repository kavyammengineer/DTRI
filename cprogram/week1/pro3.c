#include<stdio.h>
int main()
{
    int p,t,r;
     printf("enter the value of p:");
    scanf("%d",&p);
    printf("enter the value of t:");
    scanf("%d",&t);
    printf("enter the value of r:");
    scanf("%d",&r);

    float si;
    si=(p*t*r)/100;
    printf("the si value is %.2f",si);
}
