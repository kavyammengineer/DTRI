#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int lcm ,a,b;
    printf(" enter the numbers:");
    scanf("%d%d",&a,&b);
    lcm=a*b/gcd(a,b);
    printf( " the lCM is %d",lcm);
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);

}
