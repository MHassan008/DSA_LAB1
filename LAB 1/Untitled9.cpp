#include <stdio.h>

int calculateArraySum(int *arr, int size) {
    int sum = 0;
    int *ptrSum = &sum;

    for (int i = 0; i < size; ++i) {
        *ptrSum += arr[i];
    }

    return *ptrSum;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int sum = calculateArraySum(arr, size);

    printf("Sum of elements in the array is: %d\n", sum);

    return 0;
}

