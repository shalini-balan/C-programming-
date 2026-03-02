#include <stdio.h>
int main() {
    float price_per_unit, total_revenue;
    int quantity;
    char middleman;
    printf("Enter selling price per unit: ");
    scanf("%f", &price_per_unit);
    printf("Enter quantity sold: ");
    scanf("%d", &quantity);
    printf("Enter middleman used (A/B/C): ");
    scanf(" %c", &middleman);
    total_revenue = price_per_unit * quantity;
    if (middleman == 'A') {
        printf("Revenue after deduction by A: %.2f\n", total_revenue * 0.9);
    } else if (middleman == 'B') {
        printf("Revenue after deduction by B: %.2f\n", total_revenue * 0.85);
    } else if (middleman == 'C') {
        printf("Revenue after deduction by C: %.2f\n", total_revenue * 0.8);
    } else {
        printf("No middleman, original amount: %.2f\n", total_revenue);
    }
}