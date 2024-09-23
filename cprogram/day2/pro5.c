
#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    long int d;
    long unsigned int e;
    printf("enter a  int number");
    scanf("%d",&a);
    printf("enter a  float number");
    scanf("%f",&b);
    printf("enter a  char number");
    scanf("   %c",c);
    printf("enter a long int number");
    scanf("%ld",&d);
    printf("enter a long unsigned number");
    scanf("%lu",&e);
    printf("the value is %d\n %f\n %c\n %ld\n %lu\n",a,b,c,d,e);
    return 0;
}
