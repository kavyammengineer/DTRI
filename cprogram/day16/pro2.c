#include<stdio.h>
#pragma pack(3)
struct student {
    char s;
int id;
char c;
char d;
};
int main()
{
   printf("%d",sizeof(struct student)) ;
   return 0;
}
