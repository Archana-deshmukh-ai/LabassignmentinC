#include <stdio.h>

struct emp {
    int employee_number;
    char employee_name[40];
    int salary;
};

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct emp arr[n]; // 1D array of structures

    // Loop to input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Enter employee number: ");
        scanf("%d", &arr[i].employee_number);

        printf("Enter employee name: ");
        scanf(" %39[^\n]", arr[i].employee_name); // Reads a string with spaces

        printf("Enter employee salary: ");
        scanf("%d", &arr[i].salary);
    }

    // Display entered employee details
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Number: %d\n", arr[i].employee_number);
        printf("Name: %s\n", arr[i].employee_name);
        printf("Salary: %d\n", arr[i].salary);
    }

    return 0;
}