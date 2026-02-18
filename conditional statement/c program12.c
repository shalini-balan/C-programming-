#include <stdio.h>
int main() {
    int a;
    printf("Enter the num: ");
    scanf("%d",&a);
    if(a<0) {
        printf("Negative");
    }
    else if(a>0) {
        printf("Positive");
    }
    else {
        printf("0");
    }
}