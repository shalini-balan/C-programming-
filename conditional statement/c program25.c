#include <stdio.h>
int main() {
    float A,B,C;
    printf("Enter success rate of A: ");
    scanf("%f",&A);
    printf("Enter success rate of B: ");
    scanf("%f",&B);
    printf("Enter success rate of C: ");
    scanf("%f",&C);
    if(A>B && A>C) {
        printf("A has the highest priority\n");
    }
    else if(B>A && B>C) {
        printf("B has the highest priority\n");
    }
    else if(C>A && C>B) {
         printf("C has the highest priority\n");
    }
    else {
        printf("Two or more agents have the same highest success rate.\n");
    }
}