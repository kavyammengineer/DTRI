#include<stdio.h>
struct student{
int usn;
char name[20];
}s1,s2;
int main()
{
   struct student s1={1,"kavya"};
   struct student s2={2,"shivamma"};
   printf("%d the name %s",s1.usn,s1.name);
    printf("%d the name %s",s2.usn,s2.name);

}
