#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int data)
{
    if(top == MAX - 1)
    {
        printf("Stack is full\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
    printf("Pushed: %d\n", data);
}

int pop()
{
    int value;
    if(top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}

void peep()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element: %d\n", stack_arr[top]);
}

void print()
{
    int i;
    if(top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements:\n");
    for(i = top; i >= 0; i--)
    {
        printf("%d\n", stack_arr[i]);
    }
}

int main()
{
    int choice, data;

    while(1)
    {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peep\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d", &data);
                push(data);
                break;

            case 2:
                data = pop();
                if(data != -1)
                    printf("Popped: %d\n", data);
                break;
			
			case 3:
    			peep();
    			break;
    			
            case 4:
                print();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}
