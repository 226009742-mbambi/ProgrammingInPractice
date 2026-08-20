#include <stdio.h>

int main() {

    double revenue;
    double expenses;
    double balance;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("---------------------------\n");

    
    printf("Enter total revenue: ");
    scanf("%lf", &revenue);

    
    printf("Enter total expenses: ");
    scanf("%lf", &expenses);

    
    balance = revenue - expenses;

    
    printf("\nFinancial Summary:\n");
    printf("Revenue:  %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);

    if (balance > 0) {
        printf("Status:   Surplus of %.2f\n", balance);
    } 
    else if (balance < 0) {
        printf("Status:   Deficit of %.2f\n", -balance); 
    } 
    else {
        printf("Status:   The budget is perfectly balanced.\n");
    }

    return 0;
}
