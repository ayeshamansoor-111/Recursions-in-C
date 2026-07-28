#include <stdio.h> 
int Find_GCD(int num1, int num2) {
    if (num2 == 0) {
        return num1; 
    } else {
   return  Find_GCD(num2, num1 % num2);
        }
    }
    int Find_LCM(int a, int b) {
    return (a * b) / Find_GCD(a, b); 
    }
    int main() {
        int no1, no2, result; 
        printf("Enter the first number >>   "); 
        scanf("%d", &no1); 
        printf("Enter the second number >>  "); 
        scanf("%d", &no2); 
        result = Find_LCM(no1, no2); 
        printf("The LCM of %d and %d is %d\n", no1, no2, result); 
        return 0; 
    }