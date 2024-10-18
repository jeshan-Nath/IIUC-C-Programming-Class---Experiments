/*Example 3: Write a C program to find sum of following series:
 1+ 1/2 + 1/3 + 1/4 + 1/5 + ……………… + 1/N */

 #include <stdio.h>
 
 int main(){
    int number,i;
    float sum=0.0;
    printf("Enter a number:");
    scanf("%d",&number);
    for (int i = 1; i <=number; i++)
    {
        sum += (1.00/i);
    }
    printf("Sum of %d following series is %f\n",number,sum);


    return 0;
 }