//Write a C Program to check whether a given number is a prime number or not

#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number<=1){
        printf("%d is not a prime number",number);
        return 0;
    }
    for (int i = 2; i < number; i++)
    {
        if (number%i==0)
        {
            printf("it is a not prime number");
            return 0;
        }
        
    }
    
 
        printf("it is a prime number");
    
    return 0;
}