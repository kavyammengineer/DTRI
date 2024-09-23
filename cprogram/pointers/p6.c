#include<stdio.h>
int main()
{
     int a[3]={1,2,3};
     int *p=&a;
     printf("the dereference point address %d is value %d",p,*p);
    printf("the reference point is %d",a);


}
