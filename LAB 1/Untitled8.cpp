#include <stdio.h>

int calculatePower(int base, int exponent) {
    int result = 1;
    int *ptrResult = &result;

    for (int i = 0; i < exponent; ++i) {
        *ptrResult *= base;
    }

    return *ptrResult;
}

int main() {
    int base, exponent;

    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int power = calculatePower(base, exponent);

    printf("%d^%d is: %d\n", base, exponent, power);

    return 0;
}

