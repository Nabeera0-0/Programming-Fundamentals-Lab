#include <stdio.h>
int main() {
    float num1,num2,num3;
    float sum, avg;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);
    sum=num1+num2+num3;
    avg=sum/3;
    printf("Average is %f\n", avg);

    return 0 ;
}
