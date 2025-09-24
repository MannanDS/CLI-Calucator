#include <stdio.h>

int plus(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main(void) {
    int a;
    int b;
    char op;
    
    printf("Enter First Number:\n");
    scanf("%d", &a);
    
    printf("Enter Second Number:\n");
    scanf("%d", &b);
    
    printf("Enter Your Operation (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+') {
        printf("%d + %d = %d\n", a, b, plus(a, b));
    } else if (op == '-') {
        printf("%d - %d = %d\n", a, b, minus(a, b));
    } else if (op == '*') {
        printf("%d * %d = %d\n", a, b, multiply(a, b));
    } else if (op == '/') {
        if (b != 0) {
            printf("%d / %d = %d\n", a, b, divide(a, b));
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operation!\n");
    }
    
    return 0;
}
