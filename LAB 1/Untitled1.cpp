#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    printf("Sum of the two numbers is: %d\n", sum);

    return 0;
}

