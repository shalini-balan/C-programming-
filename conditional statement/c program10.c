#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    if(age<0) {
        printf("Invalid");
    }
    else if(age<=5) {
        printf("Suggestion: Mashed vegtables & soft fruits");
    }
    else if(age>=6 && age<=12) {
        printf("Suggestion: Burgers or Pasta");
    }
    else if(age>=13 && age<18) {
        printf("Suggestion: Soup or Grilled fish");
    }
    else if(age>=19 && age<30) {
        printf("Suggestion: Chapati,Idli,Dosa");
    }
    else {
        printf("Suggestion: Milk, fruits & rice");
    }
}