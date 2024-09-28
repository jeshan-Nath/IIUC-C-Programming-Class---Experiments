//Write a C program that reverses the digits of a given integer. 
#include <stdio.h>

int main(){
    int num,reminder,reversed=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num!=0)
    {
        reminder=num%10;
        reversed=  reversed*10+reminder;
        num=num/10;


    }
    printf("The ans is %d",reversed);
    return 0;
}