#include <stdio.h>

int main() {
    float salary;
    float total = 0;
    float highest;
    float lowest;
    float average;

    printf("Enter salary for employee 1: ");
    scanf("%f", &salary);
    
    total += salary;
    highest = salary;
    lowest = salary;

    for (int i = 2; i <= 50; i++) {
        printf("Enter salary for employee %d: ", i);
        scanf("%f", &salary);
        
        total += salary;

        if (salary > highest) {
            highest = salary;
        }
        if (salary < lowest) {
            lowest = salary;
        }
    }

    average = total / 50;

    printf("\n--- Salary Report ---\n");
    printf("Average salary: %.2f\n", average);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary: %.2f\n", lowest);

    return 0;
}
