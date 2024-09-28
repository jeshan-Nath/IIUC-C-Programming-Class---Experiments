//Write a C program that reads a year from the keyboard and determine whether it is a leap year or not

#include <stdio.h>

int main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
   if ((year%4==0 && year%100!=0)||(year%400==0))
   {
    printf("This is a leap year");
   }
   else{
    printf("it is not leap year");
   }
    return 0;
}