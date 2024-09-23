#include<stdio.h>
factorial( int *num);
int main()
{
    int num,res;
    printf(" enter the number:");
    scanf("%d",&num);
    res=factorial(&num);
    printf("the value is %d",res);
}
 int factorial( int *num)
 {
     int fact=1;
     while(*num>0)
     {
         fact*=*num;
         (*num)--;
     }
     return fact;
 }
