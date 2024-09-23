#include<stdio.h>
int main()
{
   int unit,cost;
   printf("enter the unit");
   scanf("%d",&unit);
   cost=unitconsumed(unit);
   printf("%d",cost);

}
int unitconsumed(int unit)
{
    int bill;
    if(unit<=300)
    {
        bill=unit*10;
    }
    else if(unit<300 && unit <=500)
    {
        bill=(300*10)+((unit-300)*20);
    }
    else
    {
        bill=(300*10)+(200*20)+((unit-500)*50);
    }
    return bill;
}
