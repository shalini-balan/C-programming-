#include <stdio.h>
int main() {
    double side1, side2;
    printf("Enter two sides: ");
    scanf("%lf %lf", &side1, &side2);

    if (side1 == side2) {
        printf("Square\n");
    } else {
        printf("Rectangle\n");
    }
}