#include <stdio.h>

int main() {
    int A, B, C, D;
    
    // Reading input values
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    // Calculating the difference
    int difference = (A * B) - (C * D);
    
    // Printing the result
    printf("Difference = %d\n", difference);
    
    return 0;
}
