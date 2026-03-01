#include <stdio.h>
int main() {
    int n,age;
    float price,total=0,discount,finalamount;
    printf("Enter no.of tickets: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        printf("Enter age: ");
        scanf("%d",&age);
        if(age<12) {
            price=100;
        }
        else if(age>=12 && age<59) {
            price=120;
        }
        else {
            price=150;
        }
        total=total+price;
    }
        if(n>8) {
            discount=total*0.11;
            finalamount=total-discount;
        }
        else {
            finalamount=total;
        }
        printf("TotalCost: %.2f\n",total);
        printf("Finalamount: %.2f\n",finalamount);
}
    
        
    
