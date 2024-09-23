#include<stdio.h>
struct student{
int a:32;
int istrue:1;
char c:8;
};
int main()
{
    printf("%d",sizeof(struct student));
}


