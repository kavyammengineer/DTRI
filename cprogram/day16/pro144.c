#include<stdio.h>
 typedef struct employee{
int id;
char name[20];
  char role[20]
  }employ;
  employ e1,e2,e3;
int main()
{
   struct employee e1={.id=23,.name="kavya",.role="manager"};
   struct employee e2={.id=23,.role="HR",.name="shivamma"};
    struct employee e3={.role="HR",.name="shivamma",.id=23};
   printf("%d the name %s the role %s\n",e1.id,e1.name,e1.role);
    printf("%d the name %s the role %s\n",e2.id,e2.name,e2.role);
      printf("%d the name %s the role %s\n",e3.id,e3.name,e3.role);

}
