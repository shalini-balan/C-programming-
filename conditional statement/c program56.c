#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if ((num >= 10000 && num <= 99999) || (num <= -10000 && num >= -99999)) {
        printf("The number is a 5-digit number.\n");
    } else {
        printf("The number is NOT a 5-digit number.\n");
    }
}