#include <stdio.h>
#include <ctype.h> 
int main() {
    char ch;
    printf("Enter a single character: ");
    scanf(" %c", &ch); 
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {  
        char lower = tolower(ch);  
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("The character '%c' is a vowel.\n", ch);
        } else {
            printf("The character '%c' is a consonant.\n", ch);
        }
    } else {
        printf("The character '%c' is invalid.\n", ch);
    }
}