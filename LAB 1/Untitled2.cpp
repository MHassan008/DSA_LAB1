#include <stdio.h>

void generateFibonacci(int n) {
    if (n <= 0) {
        return;
    }

    int first = 0, second = 1, next;
    int *ptrFirst = &first, *ptrSecond = &second;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", *ptrFirst);
        next = *ptrFirst + *ptrSecond;
        *ptrFirst = *ptrSecond;
        *ptrSecond = next;
    }

    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    generateFibonacci(terms);

    return 0;
}

