#include <stdio.h>

int findGCD(int a, int b) {
    int *ptrA = &a, *ptrB = &b;

    while (*ptrA != *ptrB) {
        if (*ptrA > *ptrB) {
            *ptrA = *ptrA - *ptrB;
        } else {
            *ptrB = *ptrB - *ptrA;
        }
    }

    return *ptrA;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int gcd = findGCD(num1, num2);

    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}

