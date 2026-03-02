#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    double radius, height, side;
    double volume, surface_area;
    printf("Choose a shape:\n1. Sphere\n2. Cube\n3. Cylinder\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter radius of sphere: ");
            scanf("%lf", &radius);
            volume = (4.0/3.0) * M_PI * pow(radius, 3);
            surface_area = 4 * M_PI * pow(radius, 2);
            break;
        case 2:
            printf("Enter side length of cube: ");
            scanf("%lf", &side);
            volume = pow(side, 3);
            surface_area = 6 * pow(side, 2);
            break;
        case 3:
            printf("Enter radius and height of cylinder: ");
            scanf("%lf %lf", &radius, &height);
            volume = M_PI * pow(radius, 2) * height;
            surface_area = 2 * M_PI * radius * (radius + height);
            break;
        default:
            printf("Invalid choice.\n");
            return 0;
    }
    printf("Volume: %.2lf\n", volume);
    printf("Surface Area: %.2lf\n", surface_area);
}