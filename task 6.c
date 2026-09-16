#include <stdio.h>
int main() {
    int c,f;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &c);
    f=(c*9/5)+32;
    printf("\n %d Celcius = %d fahrenheit",c,f);
    return 0;
}
