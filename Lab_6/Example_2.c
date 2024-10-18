/*Example 2: Write a C program to find sum of all natural numbers.
 Series: 1+2+3+4+...............................+N*/

#include <stdio.h>

int main(){
    int Number,sum=0,i;
    printf("Enter a number: ");
    scanf("%d",&Number);
    for ( i = 1; i <=Number; i++)
    {
        sum=sum+i;
    }
    
    
    printf("Sum of natural numbers %d",sum);
    return 0;
}