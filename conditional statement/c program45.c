#include <stdio.h>
int main() {
    int x,y,z;
    printf("Enter x &y &z coordinates: ");
    scanf("%d %d %d",&x,&y,&z);
    if(x==0 && y==0 && z==0) {
        printf("Point lies at Origin");
    }
    else if(x==0 && y==0) {
        printf("Point lies at Z-axis");
    }
    else if(x==0 && z==0) {
        printf("Point lies at Y-axis");
    }
    else if(y==0 && z==0) {
        printf("Point lies at X-axis");
    }
    else if(x==0) {
        printf("YZ-Plane");
    }
    else {
        printf("Point lies in space");
    }
}
        
    
