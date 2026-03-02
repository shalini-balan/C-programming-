#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
    double x, y, angle_deg, angle_rad, new_x, new_y;
    char direction[20];
    printf("Enter angle of rotation in degrees: ");
    scanf("%lf", &angle_deg);
    printf("Enter direction (clockwise/counterclockwise): ");
    scanf("%s", direction);
    printf("Enter initial x and y coordinates: ");
    scanf("%lf %lf", &x, &y);
    angle_rad = angle_deg * M_PI / 180.0;
    if (strcmp(direction, "clockwise") == 0) {
        angle_rad = -angle_rad;
    }
    new_x = x * cos(angle_rad) - y * sin(angle_rad);
    new_y = x * sin(angle_rad) + y * cos(angle_rad);
    printf("New coordinates: (%.2lf, %.2lf)\n", new_x, new_y);
}