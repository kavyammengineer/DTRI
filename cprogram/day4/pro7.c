
#include<stdio.h>
int main()
{
     int a,b,c,biggest;
     printf("enter the value:");
     scanf("%d%d%d",&a,&b,&c);

     biggest=(a>b)?((a>c)?a:c):((b>c)? b:c);
     printf(" the biggest value is %d\n",biggest);
     return 0;
}

