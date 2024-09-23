#include<stdio.h>
float simple_calculator(int a,int b,char operator);
int main()
{
   int a,b,operator;
   printf("enter the int number");
    scanf("%d",&a);
    printf("enter the int number");
    scanf("%d",&b);
    printf("enter the int number(+, -, *,/)");
    scanf(" %c",&operator);
    printf(" the result is %f",simple_calculator( a, b, operator));
}

float simple_calculator(int a,int b,char operator)
{
    float res;
    switch(operator)
    {
        case '+':res=a+b;
        break;
         case '-':res=a-b;
         break;
          case '*':res=a*b;
          break;
          case '/': if(b!=0)
          {
              res=a/b;
          }
          else
          {
              printf("divider is zero");
          }

          break;

    }
    return res;
}
