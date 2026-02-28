#include <stdio.h>
int main() {
    int x,y;
    printf("Enter x & y coordinators: ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0) {
        printf("Point lies at Origin");
    }
    else if(x==0) {
        printf("Point lies at Y");
    }
    else if(y==0) {
        printf("Point lies at x");
    }
    else if(x<0 && y>0) {
        printf("Quadrant I");
    }
    else if(x>0 && y<0) {
        printf("Quadrant II");
    }
    else if(x<0 && y<0) {
        printf("Quadrant III");
    }
    else {
        printf("Quadrant IV");
    }
}
    