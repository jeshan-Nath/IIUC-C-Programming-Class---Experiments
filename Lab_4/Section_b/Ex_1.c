//Write a C Program to find the largest number of the three numbers using if statement
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("A is the largest number.\n");
    } else if (b >= a && b >= c) {
        printf("B is the largest number.\n");
    } else {
        printf("C is the largest number.\n");
    }

    return 0;
}
