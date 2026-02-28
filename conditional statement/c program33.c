#include <stdio.h>
int main() {
    float hours,rate,overtime,salary;
    printf("Enter number of works houred: ");
    scanf("%f",&hours);
    printf("Enter overtime rate: ");
    scanf("%f",&rate);
    if(hours<=40) {
        salary=hours*rate;
    }
    else {
        overtime=(hours-40)*rate*1.5;
        salary=(40*rate)+overtime;
    }
    printf("Total salary: %.2f",salary);
}