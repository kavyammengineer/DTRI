#include<stdio.h>
int main()
{
    int a,b;
    printf(" enter the first value:");
    scanf("%d",&a);
     printf(" enter the second value:");
    scanf("%d",&b);
    (((a%30==0)||(b%30==0))||((a+b)==30))?(printf("true")):(printf("false"));

}
