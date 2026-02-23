#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

// -------- STACK --------
char stack[MAX];
int top = -1;

void push(char x) {
    if (top < MAX-1)
        stack[++top] = x;
}

char pop() {
    if (top == -1)
        return -1;
    return stack[top--];
}

char peek() {
    if (top == -1)
        return -1;
    return stack[top];
}

int isEmpty() {
    return top == -1;
}


int isOperand(char ch) {
    return isalnum(ch);  
}


int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

void infixToPostfix(char infix[], char postfix[]) {

    int i, j = 0;
    char ch;

    for (i = 0; infix[i] != '\0'; i++) {

        ch = infix[i];
        
        if (isOperand(ch)) {
            postfix[j++] = ch;
        }

        else if (ch == '(') {
            push(ch);
        }

        else if (ch == ')') {
            while (!isEmpty() && peek() != '(') {
                postfix[j++] = pop();
            }
            pop(); 
        }

        else {

            while (!isEmpty() &&
                   ((precedence(ch) < precedence(peek())) ||
                   (precedence(ch) == precedence(peek()) && ch != '^'))) {

                postfix[j++] = pop();
            }

            push(ch);
        }
    }
    
    while (!isEmpty()) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';
}

// -------- MAIN --------
int main() {

    char infix[MAX], postfix[MAX];

    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix Expression: %s\n", postfix);

    return 0;
}

