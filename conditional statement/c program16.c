#include <stdio.h>
int main() {
    int choices;
    printf("Menu:\n");
    printf("Chocolate flavours\n");
    printf("1. Milk chocolate\n");
    printf("2. Dark chocolate\n");
    printf("3. White chocolate\n");
    printf("Enter your choices: ");
    scanf("%d",&choices);
    if(choices==1) {
        printf("It is in creamy taste");
    }
    else if(choices==2) {
        printf("It is in rich flavour");
    }
    else if(choices==3) {
        printf("It is in sweet and smooth texture");
    }
    else {
        printf("Invalid choices");
    }
}