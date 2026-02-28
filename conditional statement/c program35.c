#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%7==0 || n%10==7) {
        printf("buzz number");
    }
    else {
        printf("Not a buzz number");
    }
}
   