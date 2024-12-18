#include <stdio.h>
#include <string.h>


struct Employee {
    int id;           
    char name[50];     
    double salary;     
};


void inputEmployee(struct Employee *emp) {
    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter Employee Name: ");
    getchar(); 
    fgets(emp->name, sizeof(emp->name), stdin);
    emp->name[strcspn(emp->name, "\n")] = '\0'; 

    printf("Enter Employee Salary: ");
    scanf("%lf", &emp->salary);


}


void printEmployee(struct Employee emp) {
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2lf\n", emp.salary);
    printf("------------------------\n");
}


void inputEmployees(struct Employee *emps, int count) {
    for (int i = 0; i < count; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        inputEmployee(&emps[i]); 
    }
}


void printEmployees(struct Employee *emps, int count) {
    for (int i = 0; i < count; i++) {
        printEmployee(emps[i]); 
    }
}


int getEmployeesWithSalaryMoreThan(struct Employee *emps, int count, double threshold, struct Employee *result) {
    int selectedCount = 0;

  
    for (int i = 0; i < count; i++) {
        if (emps[i].salary > threshold) {
            result[selectedCount++] = emps[i]; 
        }
    }

    return selectedCount; 
}

int main() {
    int n;

   
    printf("Enter the number of employees: ");
    scanf("%d", &n);

   
    struct Employee employees[n];

   
    inputEmployees(employees, n);

   
    printf("\nAll Employees:\n");
    printEmployees(employees, n);

   
    double threshold;
    printf("\nEnter salary threshold: ");
    scanf("%lf", &threshold);

  
    struct Employee highSalaryEmployees[n];

   
    int highSalaryCount = getEmployeesWithSalaryMoreThan(employees, n, threshold, highSalaryEmployees);

    
    if (highSalaryCount > 0) {
        printf("\nEmployees with salary greater than %.2lf:\n", threshold);
        printEmployees(highSalaryEmployees, highSalaryCount);
    } else {
        printf("\nNo employees with salary greater than %.2lf\n", threshold);
    }

    return 0;
}
