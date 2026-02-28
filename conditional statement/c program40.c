#include <stdio.h>
int main() {
    int qty;
    float price,total,finalamount,discount;
    printf("Enter quantity: ");
    scanf("%d",&qty);
    printf("Enter price per item: ");
    scanf("%f",&price);
    total=qty*price;
    if(total>=5000) {
        discount=total*0.30;
    }
    else if(total>=3000) {
        discount=total*0.20;
    }
    else if(total>=1000) {
        discount=total*0.10;
    }
    else {
        discount=0;
    }
    finalamount=total-discount;
    printf("Total Cost = %.2f\n",total);
    printf("Discount = %.2f\n",discount);
    printf("Final Amount = %.2f",finalamount);
}
