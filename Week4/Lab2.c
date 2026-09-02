#include <stdio.h>

int main() 
{
    char vendor_name[50];
    float quote_price, total_budget;
    int is_registered, docs_submitted;

    printf("Enter vendor name: ");
    scanf("%49s", vendor_name);

    printf("Enter tender quote price: ");
    scanf("%f", &quote_price);

    printf("Enter project available budget: ");
    scanf("%f", &total_budget);

    printf("Is vendor registered? (1=Yes, 0=No): ");
    scanf("%d", &is_registered);

    printf("Are all required documents submitted? (1=Yes, 0=No): ");
    scanf("%d", &docs_submitted);

    printf("\n--- Evaluation Result ---\n");
    printf("Vendor: %s\n", vendor_name);

    if (is_registered == 1 && docs_submitted == 1 && quote_price <= total_budget) 
    {
        printf("Status: Qualified\n");
    } 
    else 
    {
        printf("Status: Disqualified\n");
    }

    return 0;
}

