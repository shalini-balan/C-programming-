#include <stdio.h>
int main() {
    int age;
    float tuitionfee,totalexpenses;
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter tuition fee: ");
    scanf("%f",&tuitionfee);
    printf("Enter total expenses: ");
    scanf("%f",&totalexpenses);
    if(age>=18 && age<=25) {
        if(tuitionfee>totalexpenses) {
            printf("Tuition fee is higher than total expenses.");
        }
        else if(tuitionfee<totalexpenses) {
            printf("Total expenses are greater than tuition fee.");
        }
        else {
            printf("Both are equal.");
        }
    }
    else {
        printf("Age should between 18 & 25.");
    }
}
        
    
   
   