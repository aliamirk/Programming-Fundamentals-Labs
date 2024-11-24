#include <stdio.h>

struct Salary {
    float basic, bonus, deductions;
};

struct Employee {
    int id;
    char name[50];
    struct Salary salary;
};

float calculateNetSalary(struct Salary s) {
    return s.basic + s.bonus - s.deductions;
}

int main() {
    struct Employee e;
    printf("Enter Employee ID: ");
    scanf("%d", &e.id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e.name);
    printf("Enter Basic Pay: ");
    scanf("%f", &e.salary.basic);
    printf("Enter Bonuses: ");
    scanf("%f", &e.salary.bonus);
    printf("Enter Deductions: ");
    scanf("%f", &e.salary.deductions);

    printf("\nEmployee Details:\n");
    printf("ID: %d\nName: %s\n", e.id, e.name);
    printf("Net Salary: %.2f\n", calculateNetSalary(e.salary));

    return 0;
}
