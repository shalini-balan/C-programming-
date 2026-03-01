#include <stdio.h>
int main() {
    float salary,Increment;
    int rating;
    printf("Enter salary: ");
    scanf("%f",&salary);
    printf("Enter performance rating(1-5): ");
    scanf("%d",&rating);
    if(rating==1) {
        Increment=0;
    }
    else if(rating==2) {
        Increment=salary*0.05;
    }
    else if(rating==3) {
        Increment=salary*0.10;
    }
    else if(rating==4) {
        Increment=salary*0.15;
    }
    else if(rating==5) {
        Increment=salary*0.20;
    }
    else {
        printf("Invalid rating");
    }
    printf("Annual increment: %.2f",Increment);
}
