#include <stdio.h>
int main() {
    int month,days;
    printf("Enter month num(1-12): ");
    scanf("%d",&month);
    switch(month) {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            days=31;
            break;
        case 2:
            days=28;
            break;
        case 4:case 6:case 9:case 11:
            days=30;
            break;
        default:
            printf("Invalid num");
    }
     printf("Days: %d\n", days);
     int quadrant;
    if(month<=3) 
        printf("1");
    
    else if(month<=6) 
        printf("2");
    
    else if(month<=9) 
        printf("3");
    
    else if(month<=12)
        printf("4");
        
    else 
        printf("Invalid");
    
    
}
    
