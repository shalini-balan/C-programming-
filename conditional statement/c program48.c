#include <stdio.h>
int main() {
    int month;
    printf("Enter the month(1-12): ");
    scanf("%d",&month);
    switch(month) {
        case 1: case 2: case 10: case 11: case 12:
            printf("Sunrise: 7:00AM\n");
            printf("Sunset:  5:30PM\n");
            break;
        case 3:
            printf("Sunrise: 6:30AM\n");
            printf("Sunset:  6:30pm\n");
            break;
        case 4: case 5: case 6: case 7: case 8:
            printf("Sunrise: 5:30AM\n");
            printf("Sunset:  7:30PM\n");
            break;
        case 9:
            printf("Sunrise: 6:30AM\n");
            printf("Sunset:  6:00PM\n");
            break;
        default:
            printf("Invalid month!\n");
    }
}
    
     
