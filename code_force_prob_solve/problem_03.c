#include <stdio.h>

int main() {
    int X, Y;
    
    // Reading two integers
    scanf("%d %d", &X, &Y);
    
    // Printing the sum, multiplication, and subtraction
    printf("%d + %d = %d\n", X, Y, X + Y);
    printf("%d * %d = %d\n", X, Y, X * Y);
    printf("%d - %d = %d\n", X, Y, X - Y);
    
    return 0;
}
