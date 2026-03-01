#include <stdio.h>
int main() {
    float totalscore,totalover,runrate,percentage;
    printf("Enter total score: ");
    scanf("%f",&totalscore);
    printf("Enter total over: ");
    scanf("%f",&totalover);
    runrate=totalscore/totalover;
    percentage=runrate*10;
    printf("Percentage: %.2f\n",percentage);
    if(percentage<50) {
        printf("Opponent team will win.");
    }
    else if(percentage==50) {
        printf("Both team has equal chance.");
    }
    else {
        printf("Batting team will win.");
    }
}