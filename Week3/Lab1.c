#include <stdio.h>

int main() 
{
    float basic_pay, house_allowance, travel_allowance, tax_deduction;
    float gross_pay, net_pay;

    printf("Enter basic salary amount: ");
    scanf("%f", &basic_pay);

    printf("Enter housing allowance amount: ");
    scanf("%f", &house_allowance);

    printf("Enter transport allowance amount: ");
    scanf("%f", &travel_allowance);

    printf("Enter tax deduction amount: ");
    scanf("%f", &tax_deduction);

    gross_pay = basic_pay + house_allowance + travel_allowance;
    net_pay = gross_pay - tax_deduction;

    printf("\n=============================\n");
    printf("PAYROLL SUMMARY\n");
    printf("=============================\n");
    printf("Gross Salary : NAD %.2f\n", gross_pay);
    printf("Net Salary   : NAD %.2f\n", net_pay);
    printf("=============================\n");

    return 0;
}

