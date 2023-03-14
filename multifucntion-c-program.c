#include <stdio.h>

float calculate_total_salary(float basic_salary, float house_rent)
{
    float total_salary = ((basic_salary + house_rent) * 100.0) / 100.0;
    return total_salary;
}

int main() {
    float basic_salary, house_rent, total_salary, final_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter the house house rent percentage: ");
    scanf("%f", &house_rent);

    total_salary = calculate_total_salary(basic_salary, house_rent);
    printf("Basic Salary: %f\n", basic_salary);
    printf("House Rent: %f\n", house_rent);
    printf("Total Salary: %f\n", total_salary);

    return 0;
}
