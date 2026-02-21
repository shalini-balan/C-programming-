#include <stdio.h>
int main() {
    int a,b,product,result;
    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("Enter an integer: ");
    scanf("%d",&b);
    product=a*b;
    if(product%2==0) {
        result=product/2;
        printf("Even\n");
        printf("Result is after divided by 2:%d\n",result);
    }
    else {
        result=product/3;
        printf("Odd\n");
        printf("Result is after divided by 3:%d\n",result);
    }
}
        
    
   
   