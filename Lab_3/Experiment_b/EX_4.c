#include <stdio.h>

int main() {
    int num1, num2, n1, n2, reminder, gcd, lcm;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    n1 = num1;
    n2 = num2;
    
    // Calculate GCD using Euclidean algorithm
    while (n2 != 0) {
        reminder = n1 % n2;
        n1 = n2;
        n2 = reminder;
    }
    
    gcd = n1; // GCD is stored in n1 after the loop ends
    
    // Calculate LCM using the formula: LCM = (num1 * num2) / GCD
    lcm = (num1 * num2) / gcd;
    
    // Output the LCM
    printf("The LCM of %d and %d is %d\n", num1, num2, lcm);
    
    return 0;
}
