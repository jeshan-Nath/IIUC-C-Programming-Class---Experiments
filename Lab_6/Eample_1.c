#include <stdio.h>
#include <stdlib.h>  

int main() {
    char c;
    int choice;
    
    do {
        printf("\n1. Hello \n2. C programming \n3. Exit\n");
        
        printf("Select menu number:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Hello\n");
                break;
            case 2:
                printf("C programming\n");
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
        }
        getchar(); 

        printf("Do you want to enter more? (y/n): ");
        scanf("%c", &c); 

    } while (c == 'y');

    return 0;
}
