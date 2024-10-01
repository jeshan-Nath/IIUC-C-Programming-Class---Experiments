//Example 1: Write a C Program to calculate the grade of the student according to the specified marks using if-else-if ladder
#include <stdio.h>

int main() {
    int mark;
    printf("Enter your number: ");
    scanf("%d", &mark);

    if (mark >= 80 && mark <= 100) {
        printf("You got A+");
    }
    else if (mark >= 75 && mark < 80) {
        printf("You got A");
    }
    else if (mark >= 70 && mark < 75) {
        printf("You got A-");
    }
    else if (mark >= 65 && mark < 70) {
        printf("You got B+");
    }
    else if (mark >= 60 && mark < 65) {
        printf("You got B");
    }
    else if (mark >= 55 && mark < 60) {
        printf("You got B-");
    }
    else if (mark >= 50 && mark < 55) {
        printf("You got C+");
    }
    else if (mark >= 45 && mark < 50) {
        printf("You got C");
    }
    else if (mark >= 40 && mark < 45) {
        printf("You got D");
    }
    else if (mark >= 0 && mark < 40) {
        printf("You got F");
    }
    else {
        printf("Invalid input. Please enter a mark between 0 and 100.");
    }

    return 0;
}
