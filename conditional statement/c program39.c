#include <stdio.h>
int main() {
    int speedlimit,vehiclelimit;
    printf("Enter speed limit: ");
    scanf("%d",&speedlimit);
    printf("Enter vehicle speed: ");
    scanf("%d",&vehiclelimit);
    if(vehiclelimit>speedlimit) {
        printf("Warning!Speed limit exceeded");
    }
    else {
        printf("Vehicle speed is within limit");
    }
}