#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{int val;
struct node *next;};
 //typedef struct {int val;
//struct node *head;}mylist;
struct node* create_node(int val,struct node **head);
struct node display(struct node **head);
struct node *reverse_node(struct node **head);
struct node reversedisplay(struct node **head);


int main()
{
    struct node *head;
    head=NULL;
     create_node(1,&head);
     create_node(2,&head);
     create_node(3,&head);
     create_node(4,&head);
     create_node( 5,&head);
      display( &head);
     reverse_node(&head);
     display( &head);

}
struct node* create_node(int val,struct node **head)
{
   struct node *newnode=malloc(sizeof(struct node));
    newnode->val=val;
    newnode->next=NULL;
    struct node *present;
    if(*head==NULL)
    {
        *head=newnode;
        present=*head;

    }
     else {
    struct node* present = *head;
    while (present->next != NULL) {
        present = present->next;
    }
    present->next = newnode;
}


}
struct node display(struct node **head)
 {
      struct node *temp=*head;
      while(temp!=NULL)
      {
          printf("%d->",temp->val);
          temp=temp->next;
      }
 }
struct node* reverse_node(struct node **head)
{
    struct node*previous=0;
    struct node*current =*head;
    struct node*nextnode =0;
    while (current != NULL) {
    nextnode = current->next;
    current->next = previous;
    previous = current;
    current = nextnode;
}

    *head=previous;
    return *head;

}





