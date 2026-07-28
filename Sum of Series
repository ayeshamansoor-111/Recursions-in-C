#include <stdio.h> 
int Sum_of_Series(int num) {
    if (num == 1) {
        return 1; 
    } else {
        return num + Sum_of_Series(num - 1); 
    }
} 
int main () {
    int n, result, i; 
    printf("Enter a number >>  "); 
    scanf("%d", &n); 
    for (i = n; i >= 1; i--) {
        printf("%d", i); 
        if (i > 1) {
            printf("  +  "); 
        }
    } 
    result = Sum_of_Series(n); 
    printf("  = %d\n", result); 
    return 0; 
}
