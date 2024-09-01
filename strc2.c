#include <stdio.h>

#define MAX_EMPLOYEES 10 // Maximum number of employees, change as needed

// Define the Employee structure
struct Employee {
    char name[50];
    int age;
    float salary;
    char designation[50];
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];

    int n;

    printf("Enter the number of employees (maximum %d): ", MAX_EMPLOYEES);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_EMPLOYEES) {
        printf("Invalid number of employees.\n");
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", employees[i].name);

        printf("Enter age: ");
        scanf("%d", &employees[i].age);

        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);

        printf("Enter designation: ");
        scanf("%s", employees[i].designation);
    }

    printf("\nDetails of Employees:\n");
    for (int i = 0; i < n; ++i) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Designation: %s\n", employees[i].designation);
    }

    return 0;
}
