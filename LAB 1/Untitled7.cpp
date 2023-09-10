#include <stdio.h>

int sumOfDigits(int *num) {
    int original = *num;
    int sum ;

    while (*num > 0) {
        sum += *num % 10;
        *num /= 10;
    }

    return sum;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = sumofDigits(&num);

    printf("Sum of the digits of %d is: %d\n", num, sum);

    return 0;
}

