#include<stdio.h>
int main() {
    float marks;
    float income;
    printf("Enter  marks: ");
    scanf("%f", &marks);

    printf("Enter family income : ");
    scanf("%f", &income);

    if ((marks >= 80) || (income < 50000)){
        printf("\n You qualify for the scholarship\n");
    } else {
        printf("\nNot qualified for the scholarship\n");
    }

    return 0;
}
