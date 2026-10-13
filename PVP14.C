// Program (14): Factorial using User-Defined Function

#include <stdio.h>

long long findFactorial(int n);

int main() {
    int number;
    long long factorial;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        factorial = findFactorial(number);
        printf("Factorial of %d = %lld\n", number, factorial);
    }

    return 0;
}

long long findFactorial(int n) {
    long long fact = 1;
    
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    
    return fact;
}
