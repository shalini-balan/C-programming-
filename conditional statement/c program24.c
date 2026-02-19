#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive decimal integer: ");
    scanf("%d",&num);
    printf("Octal:%o\n",num);
    printf("Hexadecimal:%X\n",num);
}