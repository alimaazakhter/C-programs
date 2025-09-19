# C-programs
Welcome to my C Language Programs repository! 🚀
This repo contains a collection of C programs ranging from beginner-level to advanced concepts.

📂 Contents

✅ Basic Programs (Hello World, Input/Output, Operators)
✅ Control Statements (if-else, switch, loops)
✅ Functions & Recursion

🔹 Pointers in C

-> Pointers are variables that store the memory address of another variable instead of storing the actual value.
eg. 
int x = 10;
printf("%d", x);   // prints 10

🔹 Functions in C

👉 A function is a block of code that performs a specific task. It helps in reusing code, making programs modular and clean.
eg. #include <stdio.h>

int add(int a, int b) {   // function definition
    return a + b;
}

int main() {
    int x = 5, y = 10;
    int sum = add(x, y);  // function call
    printf("Sum = %d\n", sum);
    return 0;
}

🔹 Recursion in C

👉 Recursion is when a function calls itself until a condition is met. It is mostly used in problems like factorial, Fibonacci, searching, sorting, etc.
eg. 
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)   // base case
        return 1;
    else
        return n * factorial(n - 1);  // recursive call
}

int main() {
    int num = 5;
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}
