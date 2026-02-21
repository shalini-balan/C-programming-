#include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
        printf("Alphabet");
    }
    else {
        printf("Not a alphabet");
    }
}
    