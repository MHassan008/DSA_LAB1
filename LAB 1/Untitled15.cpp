#include <stdio.h>

int main() {
    double radius;
    double circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    double *ptr_radius = &radius;
    double *ptr_circumference = &circumference;

    *ptr_circumference = 2 * 3.14159 * (*ptr_radius);

    printf("Circumference of the circle: %.2lf\n", *ptr_circumference);

    return 0;
}

