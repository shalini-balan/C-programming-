#include <stdio.h>
int main() {
    int hours,salary,rate;
    char gender;
    printf("Enter no.of hours worked: ");
    scanf("%d",&hours);
    printf("Enter gender(M/F): ");
    scanf(" %c",&gender);
    if(gender=='M' || gender=='m') {
        rate=80;
    }
    else if(gender=='F' || gender=='f') {
        rate=60;
    }
    else {
        printf("Invalid");
        return 0;
    }
    if(hours<=8) {
        salary=hours*rate;
    }
    else {
        salary=(8*rate)+((hours-8)*100);
    }
    printf("Total salary: %d",salary);
}