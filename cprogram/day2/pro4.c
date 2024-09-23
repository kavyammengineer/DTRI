#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a=67;
    float b=10.5;
    char c='z';
    long int d=6700000;
    long unsigned int e=-6700000;
    printf("the value is %zu %zu %zu %zu %zu",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e));
    return 0;

}
