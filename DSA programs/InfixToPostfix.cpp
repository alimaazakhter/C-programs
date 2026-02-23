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

// -------- CHECK OPERAND --------
int isOperand(char ch) {
    return isalnum(ch);   // letters or digits
}

// -------- PRECEDENCE --------
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

// -------- INFIX TO POSTFIX --------
void infixToPostfix(char infix[], char postfix[]) {

    int i, j = 0;
    char ch;

    for (i = 0; infix[i] != '\0'; i++) {

        ch = infix[i];

        // 1. OPERAND ? add to postfix
        if (isOperand(ch)) {
            postfix[j++] = ch;
        }

        // 2. '(' ? push
        else if (ch == '(') {
            push(ch);
        }

        // 3. ')' ? pop till '('
        else if (ch == ')') {
            while (!isEmpty() && peek() != '(') {
                postfix[j++] = pop();
            }
            pop(); // remove '('
        }

        // 4. OPERATOR
        else {

            // while stack not empty AND precedence smaller/equal
            // BUT '^' is right associative
            while (!isEmpty() &&
                   ((precedence(ch) < precedence(peek())) ||
                   (precedence(ch) == precedence(peek()) && ch != '^'))) {

                postfix[j++] = pop();
            }

            push(ch);
        }
    }

    // POP remaining operators
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
