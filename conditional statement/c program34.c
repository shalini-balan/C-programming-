#include <stdio.h>
#include <math.h>
int main() {
    float P,R,T,CI;
    printf("Enter principle: ");
    scanf("%f",&P);
    printf("Enter rate: ");
    scanf("%f",&R);
    printf("Enter time: ");
    scanf("%f",&T);
    CI = P * pow((1 + R/100), T) - P;
    printf("Compound Interest = %.2f", CI);
}
   