#include <stdio.h>
int main()
{
    int base, height, ladder;
    printf("Enter base of platform: ");
    scanf("%d", &base);
    printf("Enter height of platform: ");
    scanf("%d", &height);
    printf("Enter length of ladder: ");
    scanf("%d", &ladder);
    if ((ladder * ladder) == (base * base + height * height))
    {
        printf("The given lengths form a Right Triangle\n");
    }
    else
    {
        printf("The given lengths do NOT form a Right Triangle\n");
    }
    return 0;
}