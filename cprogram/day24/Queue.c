#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define N 3
typedef struct queue{
int arr[N];
int f;
int b;}queue;
queue q1;
void fill_the_value();
void enqueue(int val);
void dequeue();
void peek();
void printthequeue();
void isempty();


int main()
{
    fill_the_value();
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(3);
enqueue(4);
 dequeue();
 dequeue();
 dequeue();
 dequeue();
dequeue();
dequeue();
 dequeue();
 dequeue();
dequeue();

 printthequeue();
 peek();
 isempty();
 isfull();

}
void fill_the_value()
{
 q1.f=-1;
 q1.b=-1;
}
void enqueue(int val)
{
   if(q1.f==-1)
   {
       q1.f=q1.b=0;
   }
   if(q1.b==N)
   {
       printf("the queue is full:");
   }

  else{ q1.arr[q1.b]=val;
   printf("%d",q1.arr[q1.b]);
   q1.b++;}
}
void dequeue()
{
    if(q1.f==-1)
    {
        printf("the queue is empty:");
    }
    else if(q1.f==q1.b)
    {
        q1.f=-1;
        q1.b=-1;
    }

    else{int val=q1.arr[q1.f];
    printf("\n%d",val);
    q1.f++;
    }

}
void peek()
{
    printf("\n the peek value is %d",q1.arr[q1.f]);
}
void printthequeue()
{
    int temp=q1.f;
    printf("\n the value in the queues  ");
    while(temp<q1.b)
    {
        printf("%d",q1.arr[temp]);
        temp++;
    }
}
void isempty()
{
    if(q1.f==-1)
        printf("the queue is  empty:");
    else
        printf("the queue is  not empty:");
}
void isfull()
{
    if(q1.b==N)
       printf("the queue is full:");
    else
        printf("the queue is not full:");

}


