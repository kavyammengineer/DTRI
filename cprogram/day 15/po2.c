#include<stdio.h>
#include<math.h>

int main()
{
int a,b,final;
int *pa,*pb,*pfinal;
pa=&a;
pb=&b;

pfinal=&final;
printf("enter the input1:");
scanf("%d",pa);
printf("enter the input2:");
scanf("%d",pb);

*pfinal=fmax(*pa,*pb);
printf("enter the maximum value %d",*pfinal);
getchar();
return 0;
}
