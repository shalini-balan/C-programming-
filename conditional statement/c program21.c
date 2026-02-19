#include <stdio.h>
int main() {
    int temp;
    printf("Enter temp: ");
    scanf("%d",&temp);
    if(temp<0) {
        printf("Freezing weather");
    }
    else if(temp>=0 && temp<=10) {
        printf("Very cold weather");
    }
    else if(temp<=20) {
        printf("Cold weather");
    }
    else if(temp<=30) {
        printf("Normal temp");
    }
    else if(temp<=40) {
        printf("Hot");
    }
    else {
        printf("Very hot");
    }
}
    
    
    