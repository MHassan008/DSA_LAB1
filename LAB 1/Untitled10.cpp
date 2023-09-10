#include <stdio.h>

void subtractNumbers(int *result, int num1, int num2) {
    *result = num1 - num2;
}

int main() {
    int num1, num2, result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    subtractNumbers(&result, num1, num2);

    printf("Result of subtraction: %d\n", result);

    return 0;
}

