#include <stdio.h>
int main() {
    int steps,time;
    printf("Enter steps: ");
    scanf("%d",&steps);
    printf("Enter time(minutes): ");
    scanf("%d",&time);
    if(steps<4000 && time<20) {
        printf("Fitness level:Low");
    }
    else if(steps>4000 && steps<7000 && time>=30) {
        printf("Fitness level:Moderate");
    }
    else if(steps>8000 && steps<11999 && time>=45) {
        printf("Fitness level:Good");
    }
    else if(steps>=12000 && time>60) {
        printf("Fitness level:High");
    }
    else {
        printf("Fitness level:Average");
    }
}
    