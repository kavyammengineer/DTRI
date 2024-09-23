#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum userinput {
    push,
    pop,
    peek,
    display,
};

struct Node {
    int val;
    struct Node* next;
};

struct stack {
    struct Node* top;
    int size;
    int maxsize;
};

struct stack* createstack(int maxsize) {
    struct stack* mystack = malloc(sizeof(struct stack));
    mystack->size = 0;
    mystack->maxsize = maxsize;
    mystack->top = NULL;
    return mystack;
}

bool pushtostack(int val, struct stack* obj) {
    if (obj->size == obj->maxsize) {
        return false;
    }

    struct Node* newnode = malloc(sizeof(struct Node));
    newnode->val = val;
    newnode->next = obj->top;
    obj->top = newnode;
    obj->size++;
    return true;
}

bool popoffstack(struct stack* obj) {
    if (obj->size == 0) {
        return false;
    }

    struct Node* prevhead = obj->top;
    obj->top = obj->top->next;
    free(prevhead);
    obj->size--;
    return true;
}

struct Node* stackpeek(struct stack* obj) {
    if (obj->size == 0) {
        return NULL;
    }
    return obj->top;
}

void displaystack(struct stack* obj) {
    if (obj->size == 0) {
        printf("Empty\n");
    } else {
        struct Node* temp = obj->top;
        while (temp != NULL) {
            printf("%d ", temp->val);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    int val;
    enum userinput ui;
    struct stack* mystack = createstack(5);

    do {
        printf("Enter 0:push\n 1:pop\n 2:peek\n 3:display\n 4:exit\n");
        scanf("%d", &ui);

        switch (ui) {
            case push:
                printf("Enter the value to push: ");
                scanf("%d", &val);
                pushtostack(val, mystack);
                displaystack(mystack);
                break;
            case pop:
                popoffstack(mystack);
                displaystack(mystack);
                break;
            case peek:
                printf("Top: %d\n", stackpeek(mystack)->val);
                break;
            case display:
                displaystack(mystack);
                break;
        }
    } while (ui != exit);

    return 0;
}
