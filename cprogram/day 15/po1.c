#include<stdio.h>
int main()
{
    int a,b,sum;
    int *in1,*in2,*sump;
    in1=&a;
    in2=&b;
    sump=&sum;
    printf("enter the input1:");
    scanf("%d",in1);
    printf("enter the input2:");
    scanf("%d",in2);
    *sump=*in1+*in2;
    printf("%d",*sump);

}
