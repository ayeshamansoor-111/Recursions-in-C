#include <stdio.h> 
void DecimalToBinary(int n) {
    if (n > 1) {
        DecimalToBinary(n / 2); } 
        printf("%d", n % 2); 
    }
int main() {
    int num; 
    printf("Enter the decimal number >>  "); 
    scanf("%d", &num); 
    printf("Binary Equivalent is:  "); 
    if (num == 0) {
        printf("0"); 
    } else {
        DecimalToBinary(num); 
    }
    return 0; 
}