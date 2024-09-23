#include<stdio.h>
typedef struct car{
int model;
char name[10];
float milage;}ca;
ca c1,c2,c3;
void ptrint_cardetails(  ca x);

int main()
{
  ca c1={1,"abc",15.2};
 ca c2={2,"bcd",17.2};
  ca c3={3,"crf",4.2};
   ptrint_cardetails(c2);
}
 void ptrint_cardetails(  ca x)
 {
    printf("%d\n",x.model);
     printf("%s\n",x.name);
      printf("%f\n",x.milage);
 }
