#include <stdio.h>
int main() {
int late;
printf("Enter the number of late days: ");
scanf("%d", &late);
if (late<= 0) {
printf("No Fine\n");
} 
else {
    if (late<= 5) {
printf("Fine: Rs. 50\n");
    } 
else {
if (late<= 10) {
printf("Fine: Rs. 100\n");
   } 
else {
     printf("Fine: Rs. 200\n");
    } }
    }

return 0;
}
