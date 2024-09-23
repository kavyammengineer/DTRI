#include<stdio.h>
float payable(int unit);
int main()
{
   float bill=0,res=0;
   int unit;
   printf(" enter the unit:");
   scanf("%d",&unit);
    bill=payable(unit);
    printf("the %f\n",bill);

     if(bill>500)
     {
         res=bill*1.12;
         printf(" the bill is %f",res);
     }
     else if(bill>100 && bill<500)
     {

         printf(" the bill is  %f",payable(unit));

     }
     else if(bill<100)
     {
         printf(" the bill is 120rs");
     }
     return 0;


}
float payable(int unit)
{
    float bill=0;
    if(unit<50)
    {
       bill=bill+unit*1.50;
    }

    else if((unit>=50) && (unit <150))
    {
        bill=bill+(49*1.50)+((unit-49)*2.80);
    }
    else
    {
        bill=bill+(49*1.50)+(99*2.80)+((unit-149)*3.45);
    }
return bill;


}
