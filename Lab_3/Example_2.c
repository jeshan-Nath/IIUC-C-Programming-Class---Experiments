//Write a C program to Calculate GCD of two positive integer.
#include <stdio.h>

int main(){
    int num1,num2,n1,n2,reminder;
    printf("Enter frist integer number: ");
    scanf("%d", &num1);
    printf("Enter second integer number: ");
    scanf("%d", &num2);
    n1=num1;
    n2=num2;
    while(n2!=0){
        reminder= n1%n2;
        n1=n2;
        n2=reminder;
    }
    printf("The gcm is %d",n1);
    return 0;
}