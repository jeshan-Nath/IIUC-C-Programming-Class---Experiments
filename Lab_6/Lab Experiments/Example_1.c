/*Experiment 1: Write a menu driven C program for calculator using do-while loop.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float num1, num2, result;
    char c;
    do
    {
        printf("Menu\n");
        printf("1.Addition (+)\n");
        printf("2.Subtraction (-)\n");
        printf("3.Multiplication (x)\n");
        printf("4.Division (/)\n");
        printf("5.Exit\n");
        printf("Enter a menu choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: \n");
            scanf("%f %f", &num1, &num2);
        }

        switch (choice)
        {
        case 1:
            printf("The Addition result is %.2f\n", result = num1 + num2);
            break;
        case 2:
            printf("The Subtraction result is %.2f\n", result = num1 - num2);
            break;
        case 3:
            printf("The Multiplication result is %.2f\n", result = num1 * num2);
            break;
        case 4:
            if (num2 != 0)
            {
                printf("The Division result is %.2f\n", result = num1 / num2);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }

        printf("Do you want to perform another operation (y/n)? ");
        getchar();  // Clear buffer
        scanf("%c", &c);
    } while (c == 'y' || c == 'Y');

    return 0;
}
