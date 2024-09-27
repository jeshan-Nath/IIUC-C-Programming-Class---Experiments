// Example 1: Write a program to compute the sum up the digits of positive integer 

#include <stdio.h>

int main(){
    int number,sum=0,reminder;
    printf("Enter a positive integer: ");
    scanf("%d",&number);
    while(number!=0){
        reminder= number%10;
        sum += reminder;
        number= number/10;
    }
    printf("The sum of intager is: %d",sum);
    return 0;
}