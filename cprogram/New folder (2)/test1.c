#include<stdio.h>
typedef struct student{
char name[20];
int marks;}std;
pointer_print( std *p1);
int main()
{
   std s1;
   std *p1=&s1;
   strcpy(p1->name,"kavya");
   p1->marks=90;
   printf("%s\n",p1->name);
    printf("%d\n",(p1->marks));
    printf("after function call\n");
    pointer_print(p1);


}
  pointer_print( std *p1)
{
       printf("%s\n",p1->name);
    printf("%d\n",(p1->marks));
}
