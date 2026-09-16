#include <stdio.h>
int main() {
    char name[20];
    char initial;

     printf("Enter your full name (write with spaces) : ");
    fgets(name, sizeof(name), stdin);
    printf("Full Name : ");
    puts(name);
    printf("Enter your first initial: ");
    initial=getchar(); 
    printf("Initial is: ");
    putchar(initial);
    

    return 0;
}
