#include <stdio.h>
int main() {
    int tc,pd,plnd;
    int req;
    printf("Enter tc: ");
    scanf("%d",&tc);
    printf("Enter pd: ");
    scanf("%d",&pd);
    printf("Enter plnd: ");
    scanf("%d",&plnd);
    req=pd*plnd;
    if(tc>=req) {
        printf("1");
    }
    else {
        printf("0");
    }
}