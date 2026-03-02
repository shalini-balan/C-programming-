#include <stdio.h>
int main() {
    float age;
    printf("Enter Lions's age: ");
    scanf("%f",&age);
    if(age<0 || age>26) {
        printf("Invalid age");
    }
    else if(age<=1) {
        printf("Cub: %.2f years",age);
    }
    else if(age<=3) {
        printf("Juvenile: %.2f years",age);
    }
    else if(age<=6) {
        printf("Subadult: %.2f years",age);
    }
    else if(age<=10) {
        printf("Young adult: %.2f years",age);
    }
    else {
        printf("Old adult: %.2f years",age);
    }
}

        
    