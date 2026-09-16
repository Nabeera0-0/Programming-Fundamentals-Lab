#include <stdio.h>

int main() {
    int length,width,a,p;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    a=length*width;
    p= 2*(length + width);
    printf("Area: %d\n",a);
    printf("Perimeter: %d", p);
    return 0;
}
