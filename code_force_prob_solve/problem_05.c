#include <stdio.h>
#include <math.h>

int main() {
    double R, area;
    
    // Reading the radius
    scanf("%lf", &R);
    
    // Calculating the area
    area = 3.141592653 * R * R;
    
    // Printing the area with 9 decimal places
    printf("%.9lf\n", area);
    
    return 0;
}
