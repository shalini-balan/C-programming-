#include <stdio.h>
int main() {
    float purchase_amount,discount_amount;
    printf("Enter purchase amount: ");
    scanf("%f",&purchase_amount);
    if(purchase_amount<1000) {
        discount_amount=0;
    }
    else if(purchase_amount<=4000) {
        discount_amount=purchase_amount*0.10;
    }
    else if(purchase_amount<=8000) {
        discount_amount=purchase_amount*0.15;
    }
    else {
        discount_amount=purchase_amount*0.20;
    }
    printf("Discount amount: %.2f",discount_amount);
}
        
    