#include <stdio.h>
#include <math.h>
int main() {
    int num;
    double root;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    if(num<0) {
        printf("Enter a positive integer.\n");
    }
    else {
        root=sqrt(num);
        if(root==(int)root) {
            printf("%d is a perfect square.\n");
        }
        else {
            printf("%d not a perfect square.\n");
        }
    }
}
        
    
   
   