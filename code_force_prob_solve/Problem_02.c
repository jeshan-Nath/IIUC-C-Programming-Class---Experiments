#include <stdio.h>

int main() {
    int i;
    long long ll;
    char ch;
    float f;
    double d;
    
    // Reading the input in the specified order
    scanf("%d %lld %c %f %lf", &i, &ll, &ch, &f, &d);
    
    // Printing the values, each on a new line
    printf("%d\n", i);
    printf("%lld\n", ll);
    printf("%c\n", ch);
    printf("%.2f\n", f);
    printf("%.5lf\n", d);
    
    return 0;
}
