#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node* next;
};

typedef struct {
    int val;
    struct node* head;
} MyLinkedList;

MyLinkedList* myLinkedListCreate() {
    MyLinkedList* mylist = calloc(1, sizeof(MyLinkedList));
    mylist->head = NULL;
    return mylist;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    struct node* temp = obj->head;
    int i = 0;
    while (temp != NULL) {
        if (i == index) {
            return temp->val;
        }
        temp = temp->next;
        i++;
    }
    return -1;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    struct node* newNode = malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->val = val;
    newNode->next = obj->head;
    obj->head = newNode;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    struct node* newNode = malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->val = val;
    newNode->next = NULL;
    if (obj->head == NULL) {
        obj->head = newNode;
    } else {
        struct node* temp = obj->head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    if (index < 0) {
        printf("Invalid index\n");
        return;
    }
    struct node* newNode = malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->val = val;
    if (index == 0) {
        newNode->next = obj->head;
        obj->head = newNode;
    } else {
        struct node* temp = obj->head;
        int i = 0;
        if (temp == NULL) {
            printf("Index out of range\n");
            return;
        }
        while (temp->next != NULL && i < index - 1) {
            temp = temp->next;
            i++;
        }
        if (temp->next == NULL && i < index - 1) {
            printf("Index out of range\n");
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    if (index < 0) {
        printf("Invalid index\n");
        return;
    }
    if (index == 0) {
        struct node* temp = obj->head;
        obj->head = temp->next;
        free(temp);
    } else {
        struct node* pre = obj->head;
        int count = 0;
        while (pre->next != NULL && count < index - 1) {
            pre = pre->next;
            count++;
        }
        if (pre->next == NULL) {
            printf("Index out of range\n");
            return;
        }
        struct node* temp = pre->next;
        pre->next = temp->next;
        free(temp);
    }
}

void myLinkedListFree(MyLinkedList* obj) {
    struct node* temp = obj->head;
    while (temp != NULL) {
        struct node* next = temp->next;
        free(temp);
        temp = next;
    }
    free(obj);
}

void printList(MyLinkedList* obj) {
    struct node* temp = obj->head;
    while (temp != NULL) {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    MyLinkedList* list = myLinkedListCreate();
    myLinkedListAddAtHead(list, 1);
    myLinkedListAddAtHead(list, 2);
    myLinkedListAddAtHead(list, 3);
    printList(list); // prints: 3 2 1
    myLinkedListAddAtIndex(list, 1, 4);
    printList(list); // prints: 3 4 2 1
    myLinkedListDeleteAtIndex(list, 1);
    printList(list); // prints: 3 2 1
    myLinkedListFree(list);
    return 0;
}

