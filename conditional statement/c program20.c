#include <stdio.h>
int main() {
    float iniinves,spp,csv;
    float share,cv, result;
    printf("Enter ini inves amount: ");
    scanf("%f",&iniinves);
    printf("Enter stock purchase price: ");
    scanf("%f",&spp);
    printf("Enter current stock value: ");
    scanf("%f",&csv);
    share=iniinves/spp;
    cv=share*csv;
    result=cv-iniinves;
    if(result>0) {
        printf("Profit=%.2f",result);
    }
    else if(result<0) {
        printf("Loss=%.2f\n",-result);
    }
    else {
        printf("No profit,no loss\n");
    }
}
