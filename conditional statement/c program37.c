#include <stdio.h>
int main() {
    int num,div;
    printf("Enter num: ");
    scanf("%d",&num);
    printf("Enter div: ");
    scanf("%d",&div);
    if(div==0) {
        printf("Divisible by 0 is not allowed.");
    }
    else if(num%div==0){
        printf("It is divisible.");
    }
    else {
        printf("It is not divisible.");
    }
}
    