/*Experiment 1: Write a C program to calculate the roots of the quadratic equation 
ax2 + bx +c = 0 where a, b and c are known using if-else-if ladder.*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2, realpart, imagpart;

    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);

    d = (b * b) - (4 * a * c);

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots of the quadratic equation are real and distinct: %f and %f\n", x1, x2);
    }
    else if (d == 0) {
        x1 = -b / (2 * a);
        printf("The root of the quadratic equation is real and repeated: %f\n", x1);
    }
    else {
        realpart = -b / (2 * a);
        imagpart = sqrt(-d) / (2 * a);
        printf("The roots of the quadratic equation are complex: %f + %fi and %f - %fi\n", realpart, imagpart, realpart, imagpart);
    }

    return 0;
}
