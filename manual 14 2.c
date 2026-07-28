#include <stdio.h> 
int Number_of_Digits (int n) {
    if (n < 10) {
        return 1; 
    } else {
        return 1 + Number_of_Digits(n / 10); 
    }
}
int main() {
    int n, digit; 
    printf("Enter a number >>  ");
    scanf("%d", &n); 
    digit = Number_of_Digits(n); 
    printf("Number of digits in %d are %d.\n", n, digit); 
    return 0; 
}