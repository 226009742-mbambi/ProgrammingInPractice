#include <stdio.h>
#include <string.h>

int main() {
    
    float salaries[50]; 
    float totalSalaries = 0.0, avgSalary = 0.0;
    float highestSalary, lowestSalary;
    float searchSalary;
    int salaryFound = 0;

    printf("=== PART A: EMPLOYEE SALARIES ===\n");
    
    for (int i = 0; i < 50; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        totalSalaries += salaries[i];

        if (i == 0) {
            highestSalary = salaries[0];
            lowestSalary = salaries[0];
        } else {
            if (salaries[i] > highestSalary) {
                highestSalary = salaries[i];
            }
            if (salaries[i] < lowestSalary) {
                lowestSalary = salaries[i];
            }
        }
    }

    avgSalary = totalSalaries / 50.0;

    // Display results
    printf("\n--- All Captured Salaries ---\n");
    for (int i = 0; i < 50; i++) {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }
    printf("\nAverage Salary: %.2f\n", avgSalary);
    printf("Highest Salary: %.2f\n", highestSalary);
    printf("Lowest Salary: %.2f\n\n", lowestSalary);

    printf("Enter a salary amount to search for: ");
    scanf("%f", &searchSalary);
    for (int i = 0; i < 50; i++) {
        if (salaries[i] == searchSalary) {
            printf("Salary %.2f found at employee position %d.\n", searchSalary, i + 1);
            salaryFound = 1;
            break;
        }
    }
    if (!salaryFound) {
        printf("Salary %.2f was not found in records.\n", searchSalary);
    }


    float budgets[10];
    float totalBudget = 0.0, avgBudget = 0.0;
    float tempBudget;

    printf("\n=== PART B: DEPARTMENT BUDGETS ===\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
        totalBudget += budgets[i];
    }

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (budgets[j] > budgets[j + 1]) {
                tempBudget = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = tempBudget;
            }
        }
    }

    avgBudget = totalBudget / 10.0;

    printf("\n--- Sorted Budgets (Lowest to Highest) ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Department Rank %d: %.2f\n", i + 1, budgets[i]);
    }
    printf("\nTotal Budget Expenditure: %.2f\n", totalBudget);
    printf("Average Department Budget: %.2f\n\n", avgBudget);

    char registrations[20][20];
    char searchReg[20];
    int regFound = 0;

    printf("=== PART C: VEHICLE REGISTRATIONS ===\n");
    
    for (int i = 0; i < 20; i++) {
        printf("Enter registration plate %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\n--- All Vehicle Registrations ---\n");
    for (int i = 0; i < 20; i++) {
        printf("Vehicle %d: %s\n", i + 1, registrations[i]);
    }

    printf("\nEnter a registration plate to search: ");
    scanf("%19s", searchReg);
    for (int i = 0; i < 20; i++) {
        if (strcmp(registrations[i], searchReg) == 0) {
            printf("Vehicle registration '%s' found at parking slot %d.\n", searchReg, i + 1);
            regFound = 1;
            break;
        }
    }
    if (!regFound) {
        printf("Registration number '%s' was not found.\n", searchReg);
    }

    return 0;
}
