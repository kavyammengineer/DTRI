#include<stdio.h>
int main()
{
    int a[]={1,2,1,2,3},i,result=0;
    int size=sizeof(a)/sizeof(a[0]);
    for(i=0;i<size;i++)
    {
       result^=a[i];
    }
       printf("the value is %d",result);
       return 0;
}

