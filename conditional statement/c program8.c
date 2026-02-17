#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two no's: ");
    scanf("%d %d",&a,&b);
    if((a^b)==0) {
        printf("Both are equal");
    }
    else {
        printf("Both are not equal");
    }
}