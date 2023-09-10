#include <stdio.h>

int reverseNumber(int number) {
    int reversed = 0;
    int *ptrReversed = &reversed;

    while (number != 0) {
        int digit = number % 10;
        *ptrReversed = (*ptrReversed) * 10 + digit;
        number /= 10;
    }

    return *ptrReversed;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = reverseNumber(num);

    printf("Reversed number: %d\n", reversed);

    return 0;
}

