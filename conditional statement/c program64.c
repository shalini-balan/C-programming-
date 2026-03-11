#include <stdio.h>
int main()
{
    int frequency;
    printf("Enter frequency in Hertz: ");
    scanf("%d", &frequency);
    printf("Frequency = %.2f Hz\n", (float)frequency);
    if (frequency < 20)
    {
        printf("Category: Infrasound\n");
    }
    else if (frequency >= 20 && frequency <= 20000)
    {
        printf("Category: Audible sound\n");
    }
    else
    {
        printf("Category: Ultrasound\n");
    }

    return 0;
}