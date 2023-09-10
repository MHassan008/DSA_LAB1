#include <stdio.h>

void calculateRectangleArea(float length, float width, float *area) {
    *area = length * width;
}

int main() {
    float length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    calculateRectangleArea(length, width, &area);

    printf("Area of the rectangle is: %.2f\n", area);

    return 0;
}

