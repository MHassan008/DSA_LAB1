#include <stdio.h>

void compareNumbers(int *num1, int *num2) {
    if (*num1 > *num2) {
        printf("%d is greater than %d\n", *num1, *num2);
    } else if (*num1 < *num2) {
        printf("%d is greater than %d\n", *num2, *num1);
    } else {
        printf("%d and %d are equal\n", *num1, *num2);
    }
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    compareNumbers(&num1, &num2);

    return 0;
}

