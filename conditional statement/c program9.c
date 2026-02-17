#include <stdio.h>
int main() {
    int choices;
    float a,b,result;
    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choices(1-4): ");
    scanf("%d",&choices);
    printf("Enter two no's: ");
    scanf("%f %f",&a,&b);
    switch(choices) {
        case 1:
            result=a+b;
            printf("Result: %.2f",result);
            break;
        case 2:
            result=a-b;
            printf("Result: %.2f",result);
            break;
        case 3:
            result=a*b;
            printf("Result: %.2f",result);
            break;
        case 4:
            if(b!=0) {
                printf("Result: %.2f",a/b);
            }
            else {
                printf("Division by zero is not allowed!");
                break;
        default:
            printf("Invalid");
            }
    }
}
            
    
    