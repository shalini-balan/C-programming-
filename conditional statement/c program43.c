#include <stdio.h>
int main() {
    float temperature,oilpressure;
    int rpm;
    printf("Enter temperate: ");
    scanf("%f",&temperature);
    printf("Enter oil pressure: ");
    scanf("%f",&oilpressure);
    printf("Enter rpm: ");
    scanf("%d",&rpm);
    if(temperature>75 || oilpressure<12 || rpm>7000) {
        printf("Poor engine health");
    }
    else if(temperature>50 || oilpressure<12 || rpm>4000) {
        printf("Fair engine health");
    }
    else {
        printf("Good engine health");
    }
}