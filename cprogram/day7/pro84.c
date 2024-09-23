
#include<stdio.h>
float product_number(int a,float b);
int main()
{
    int a;
    float b;
    printf("enter the int number");
    scanf("%d",&a);
    printf("enter the int number");
    scanf("%f",&b);
    printf("the product value is %f",product_number(a,b));

}
float product_number(int a,float b)
{

    return a*b;
}
