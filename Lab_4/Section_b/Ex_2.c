//Write a C Program to check whether a person is eligible to vote or not using if-else

#include <stdio.h>

int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",& age);
    if(age>=18){
        printf("You are eligable to vote");
    }
    else{
        printf("You are not eligable to vote");
        }

    return 0;
}