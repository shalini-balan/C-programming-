#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter height (in meters): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI = %.2f\n", bmi);

    if(bmi >= 0 && bmi < 18.5) {
        printf("Underweight");
    }
    else if(bmi >= 18.5 && bmi < 25) {
        printf("Normal weight");
    }
    else if(bmi >= 25 && bmi < 30) {
        printf("Overweight");
    }
    else if(bmi >= 30 && bmi <= 100) {
        printf("Obese");
    }
    else {
        printf("Invalid BMI value");
    }

    return 0;
}