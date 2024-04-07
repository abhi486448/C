#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    
    // Input
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is undefined for negative numbers.\n");
    } else {
        // Calculate and display the factorial
        int result = factorial(num);
        printf("The factorial of %d is %d\n", num, result);
    }
    
    return 0;
}
