#include <stdio.h>
int main() {
    int symp;
    printf("Enter no.of symptoms: ");
    scanf("%d",&symp);
    if(symp>=5) {
        printf("Critical condition\nAttention:High priority");
    }
    else if(symp==3 || symp==4) {
        printf("Moderate condition\nAttention:Medium priority");
    }
    else if(symp<3) {
        printf("Stable condition\nAttention:Low priority");
    }
    else {
        printf("Average condition");
    }
}