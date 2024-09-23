#include<stdio.h>
#include<math.h>

int main()
{
    double  n,num,power,res;
    printf("enter the number :");
    scanf("%lf",&num);
    printf("enter the root:");
    scanf("%lf",&n);
    power=(1/n);
    res=pow(num,power);
    printf("the root number is %lf",res);

}
