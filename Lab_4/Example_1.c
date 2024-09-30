
//Write a C Program to check a student is passed in the Exam of ETE-1222 using if statement
#include <stdio.h>

int main() {
    int number;
    printf("Enter the score for the Exam of ETE-1222: ");
    scanf("%d", &number);

    if (number >= 40) {
        printf("Congratulations! You have passed the Exam of ETE-1222.\n");
    } else {
        printf("You did not pass the Exam of ETE-1222.\n");
    }

    return 0;
}
