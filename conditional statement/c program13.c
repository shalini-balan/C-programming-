#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    if(age<0) {
        printf("Invalid age");
    }
    else if(age<=12) {
        printf("Category: Children\nTicket price:100");
    }
    else if(age>=13 && age<=19) {
        printf("Category: Teenagers\nTicket price:150");
    }
    else if(age>=20 && age<=60) {
        printf("Category: Adults\nTicket price:200");
    }
    else {
        printf("Category: Seniors\nTicket price:260");
    }
}