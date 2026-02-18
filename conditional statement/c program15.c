#include <stdio.h>
int main() {
    int pen,notebook,pencil;
    int total;
    printf("Enter total no.of pen: ");
    scanf("%d",&pen);
    printf("Enter total no.of notebook: ");
    scanf("%d",&notebook);
    printf("Enter total no.of pencil: ");
    scanf("%d",&pencil);
    total=(pen*20)+(notebook*70)+(pencil*9);
    printf("Total amount=%d",total);
}