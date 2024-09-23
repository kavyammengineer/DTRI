#include<stdio.h>
#include<stdlib.h>
typedef struct node{int data;
struct node *next;}nod;
void createnode(int val,nod**head);
void printlist(nod* head);
int main()
{
     nod *head=NULL;
    createnode(1,&head);
    createnode(2,&head);
    createnode(3,&head);
    createnode(4,&head);
    printlist(head);

}
void createnode(int val,nod**head)
{
    nod *address=(nod*)malloc(sizeof(nod));
    address->data=val;
    address->next=NULL;

    if(*head==NULL)
    {
        *head=address;
    }
    else{

  nod *temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=address;
    }

}
void printlist(nod* head)
{
    nod *temp = head;
    while (temp != NULL)
        {
        printf("%d ", temp->data);
        temp = temp->next;
       }
    printf("\n");
}


