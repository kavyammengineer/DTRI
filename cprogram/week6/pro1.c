#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{int val;
struct node *next;};
struct node *create_node(int val,struct node **head);
struct node *insert_intail(int val,struct node **head);
struct node *delete_intail(struct node **head);
void display(struct node **head);
int main()
{
    struct node *head;
    head=NULL;
     create_node(1,&head);
     create_node(2,&head);
     create_node(3,&head);
     create_node(4,&head);
     create_node( 5,&head);
     display(&head);
     insert_intail(6,&head);
     insert_intail(7,&head);
     display(&head);
     delete_intail( &head);
     display(&head);
}
struct node *create_node(int val,struct node **head)
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
    else{
             struct node* present = *head;
    while (present->next != NULL)
        {
        present = present->next;
        }
    present->next = newnode;
        }
        return *head;

}
void display(struct node **head)
 {
      struct node *temp=*head;
      while(temp!=NULL)
      {
          printf("%d->",temp->val);
          temp=temp->next;
      }
      printf("\n");
 }
 struct node *insert_intail(int val,struct node **head)
 {
     struct node *newnode=malloc(sizeof(struct node));
     newnode->val=val;
     newnode->next=NULL;
     if (*head == NULL) {
        *head = newnode;
    }
     else {
        struct node* present = *head;
        while (present->next != NULL)
            {
            present = present->next;
           }
        present->next = newnode;
    }
    return *head;

 }
 struct node *delete_intail(struct node **head)
 {
     if (*head == NULL) {
        return NULL;
    }
    if ((*head)->next == NULL)
        {
        free(*head);
        *head = NULL;
        return NULL;
        }
    struct node* present = *head;
    while (present->next->next != NULL) {
        present = present->next;
    }
    struct node* temp = present->next;
    present->next = NULL;
    free(temp);
    return *head;
 }



