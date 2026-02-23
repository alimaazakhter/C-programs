#include <stdio.h>
#define size 5

struct stack {
    int st[size];
    int top;
};

struct stack s; // global stack variable

int isempty() {
    if (s.top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int isfull() {
    if (s.top == size - 1) {
        return 1;
    } else {
        return 0;
    }
}

void push(int element) {
    if (isfull()) {
        printf("\nStack is Full (Overflow)");
    } else {
        s.top++;
        s.st[s.top] = element;
        printf("\nElement %d pushed successfully", element);
    }
}

void pop() {
    if (isempty()) {
        printf("\nStack is Empty (Underflow)");
    } else {
        printf("\nElement popped: %d", s.st[s.top]);
        s.top--;
    }
}

void peep() {
    if (isempty()) {
        printf("\nStack is empty");
    } else {
        printf("\nTop element: %d", s.st[s.top]);
    }
}

void display() {
    int i;
    if (isempty()) {
        printf("\nStack is empty");
    } else {
        printf("\nStack elements are:\n");
        for (i = s.top; i >= 0; i--) {
            printf("%d\n", s.st[i]);
        }
    }
}

int main() {
    int choice, element;
    s.top = -1; // initialize stack

    while (1) {
        printf("\n\n--- Stack Menu ---");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peep");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                peep();
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
            default:
                printf("\nInvalid choice! Try again.");
        }
    }
}
