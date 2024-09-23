#include<stdio.h>
void fun1(int **ptr1,int **ptr2);
int main()
{
    int a=3,b=4;
   int * ptr1=&a;
   int * ptr2=&b;
   printf("a=%d,b=%d before swaping\n",ptr1,ptr2);

    fun1(&ptr1,&ptr2);
    printf("a=%d,b=%d after swaping\n",ptr1,ptr2);


}
void fun1(int **ptr1,int **ptr2)
{
  int *temp;
  temp=*ptr1;
  *ptr1=*ptr2;
  *ptr2=temp;
}
