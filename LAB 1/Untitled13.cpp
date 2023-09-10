#include <stdio.h>

void divideNumbers(double *result, double num1, double num2) {
    if (num2 != 0) {
        *result = num1 / num2;
    } else {
        *result = 0; 
    }
}

int main() {
    double num1, num2, result;

    printf("Enter the numerator: ");
    scanf("%lf", &num1);

    printf("Enter the denominator: ");
    scanf("%lf", &num2);

    divideNumbers(&result, num1, num2);

    printf("Result of division: %.2lf\n", result);

    return 0;
}

