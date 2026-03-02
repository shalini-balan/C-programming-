#include <stdio.h>

int main() {
    char ch1, ch2;
    int ascii1, ascii2;
    printf("Enter first character: ");
    scanf(" %c", &ch1);
    printf("Enter second character: ");
    scanf(" %c", &ch2);
    ascii1 = ch1;
    ascii2 = ch2;
    int v1 = (ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u'||
              ch1=='A'||ch1=='E'||ch1=='I'||ch1=='O'||ch1=='U');
    int v2 = (ch2=='a'||ch2=='e'||ch2=='i'||ch2=='o'||ch2=='u'||
              ch2=='A'||ch2=='E'||ch2=='I'||ch2=='O'||ch2=='U');
    printf("ASCII value of %c = %d\n", ch1, ascii1);
    printf("ASCII value of %c = %d\n", ch2, ascii2);
    if(v1 && v2) {
        printf("Sum = %d", ascii1 + ascii2);
    }
    else if((v1 && !v2) || (!v1 && v2)) {
        printf("Difference = %d", ascii1 - ascii2);
    }
    else {
        printf("Product = %d", ascii1 * ascii2);
    }
}