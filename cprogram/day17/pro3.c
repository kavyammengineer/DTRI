#include<stdio.h>
int fun()
{
     int num;
    num++;
    return num;
   // printf("%d",num);
}
int main()
{
    printf(" old value %d",fun());
    printf(" new value %d",fun());
}
