#include <stdio.h>
int main() {
    float salary,bonus,fs;
    char gender;
    printf("Enter employee salary: ");
    scanf("%f",&salary);
    printf("Enter gender: ");
    scanf(" %c",&gender);
    if(gender=='M'||gender=='m') {
        bonus=salary*0.05;
    }
    else if(gender=='F'||gender=='f') {
        bonus=salary*0.10;
    }
    else {
        printf("Invalid gender\n");
        
    }
    fs=salary+bonus;
    printf("Bonus=%.2f\n",bonus);
    printf("fs=%.2f\n",fs);
}