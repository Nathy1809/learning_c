#include <stdio.h>

int recursiveDivision(int dividend, int divisor) {
    if(dividend < divisor) {
        return 0;
    } else {
        int partialResult = dividend - divisor;
        printf("%d - %d = %d\n", dividend, divisor, partialResult);
        return 1 + recursiveDivision(partialResult, divisor);
    }
}

int main() {
    int a;
    int b;
    
    printf("Enter the dividend: ");
    scanf("%d", &a);
    
    printf("Enter the divisor: ");
    scanf("%d", &b);
    
    if(b == 0) {
        printf("ERROR - division by 0 is not allowed");
        return 1;
    }
    int quotient = recursiveDivision(a, b);
    int remainder = a - quotient * b;
    
    printf("Quotient = %d, Remainder = %d\n", quotient, remainder);
    
    return 0;
}
