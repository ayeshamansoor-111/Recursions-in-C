#include <stdio.h> 
int Find_GCD(int num1, int num2) {
    if (num2 == 0) {
        return num1; 
    } else {
    Find_GCD(num2, num1 % num2);
        }
    }
int main() {
    int n1, n2, result; 
    printf("Enter the first number >>  "); 
    scanf("%d", &n1); 
    printf("Enter the second number >>  "); 
    scanf("%d", &n2); 
    result = Find_GCD (n1, n2); 
    printf("The GCD of %d and %d is %d\n", n1, n2, result); 
    return 0; 
}