#include <stdio.h>
#include<math.h>

int main(){
    float a,b,c,s,Area;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The  area of the triangle is %.2f",Area);

    return 0;
}