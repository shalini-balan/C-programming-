#include <stdio.h>
int main() {
    int angle;
    printf("Enter an angle: ");
    scanf("%d",&angle);
    if(angle==0 || angle==360) {
        printf("East direction");
    }
    else if(angle==90) {
        printf("North direction");
    }
    else if(angle==180) {
        printf("West direction");
    }
    else if(angle==270) {
        printf("South direction");
    }
    else {
        printf("Invalid direction");
    }
}
