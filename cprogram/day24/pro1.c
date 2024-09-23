#include<stdio.h>
struct node
{
    int data;
    struct node* next;
} n;
struct node* createfun1();

int main()
{
    n.data=10;
    struct node *ptr1=createfun1();
    struct node *ptr2=createfun1();
    struct node *ptr3=createfun1();
    struct node *ptr4=createfun1();
    struct node *ptr5=createfun1();
}
struct node* createfun1()
{
    struct node *var=malloc(sizeof(struct node));
    return var;
}
