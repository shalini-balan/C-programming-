#include <stdio.h>
#include <math.h>
int main()
{
    int base, exponent;
    double result;
    printf("Enter base value: ");
    scanf("%d", &base);
    printf("Enter exponent value: ");
    scanf("%d", &exponent);
    result = pow(base, exponent);
    printf("Result = %.2lf\n", result);
    return 0;
}