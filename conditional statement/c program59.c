#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    double radius, height, base_area, volume;
    printf("Select a shape:\n1. Cone\n2. Pyramid\n3. Prism\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: // Cone
            printf("Enter radius and height of the cone: ");
            scanf("%lf %lf", &radius, &height);
            volume = (1.0/3.0) * M_PI * pow(radius, 2) * height;
            break;
        case 2: // Pyramid
            printf("Enter base area and height of the pyramid: ");
            scanf("%lf %lf", &base_area, &height);
            volume = (1.0/3.0) * base_area * height;
            break;
        case 3: // Prism
            printf("Enter base area and height of the prism: ");
            scanf("%lf %lf", &base_area, &height);
            volume = base_area * height;
            break;
        default:
            printf("Invalid choice.\n");
            return 0;
    }
    printf("Volume: %.2lf\n", volume);
}