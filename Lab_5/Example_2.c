//Example 2: Write a C program to create a simple calculator using Switch Source Code:
#include <stdio.h>

int main() {
    int a, b;
    char operator;
    
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator); 
    
    printf("Enter two operands: ");
    scanf("%d %d", &a, &b);
    
    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        
        case '/':
            if (b != 0) {
                printf("%d / %d = %d\n", a, b, a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        
        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}
