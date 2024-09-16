#include <stdio.h>

int main(){
    float Celsius,Fahrenheit;
    printf("Enter the value of  Celsius: ");
    scanf("%f",&Celsius);
    Fahrenheit = (Celsius * 9.0/5.0) + 32;
    printf("The value of Fahrenheit is: %.2f\n",Fahrenheit);

    return 0;
}