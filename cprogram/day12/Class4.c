#include<stdio.h>
int main()
{
    int a=6;
    void *vp;
    vp=&a;
    printf("the value is %d",*(int*)vp);
}
