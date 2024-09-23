#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int *p=&a;
    printf("the value is %d",*p+1);
    p=p+2;
    printf("the value is %d",*p+5);
    p=&a[3];
     printf("the value is %d",*p);
     *p=2;
      printf("the value is %d",*p);


}
