#include <stdio.h>
#include <stdlib.h>


typedef struct Employee {
    int id;
    char name[50];
    double salary;
    struct Employee *next;
} Employee;


Employee *createEmployee(int id, char *name, double salary) {
    Employee *newEmp = (Employee *)malloc(sizeof(Employee));
    if (!newEmp) exit(1);
    newEmp->id = id;
    for (int i = 0; name[i] && i < 49; i++) newEmp->name[i] = name[i];
    newEmp->name[49] = '\0';
    newEmp->salary = salary;
    newEmp->next = NULL;
    return newEmp;
}
void printEmployee(Employee *emp) {
    if (emp) printf("ID: %d, Name: %s, Salary: %.2lf\n", emp->id, emp->name, emp->salary);
}

void printEmployeeList(Employee *empList) {
    for (; empList; empList = empList->next) printEmployee(empList);
}

Employee *addEmployee(Employee *empList, Employee *newEmp) {
    if (!empList) return newEmp;
    Employee *current = empList;
    while (current->next) current = current->next;
    current->next = newEmp;
    return empList;
}

double computeAverageSalary(Employee *empList) {
    double totalSalary = 0;
    int count = 0;
    for (; empList; empList = empList->next) {
        totalSalary += empList->salary;
        count++;
    }
    return count ? totalSalary / count : 0;
}


Employee *getEmployeesWithSalaryMoreThan(Employee *empList, double threshold) {
    Employee *resultList = NULL;
    for (; empList; empList = empList->next) {
        if (empList->salary > threshold) {
            resultList = addEmployee(resultList, createEmployee(empList->id, empList->name, empList->salary));
        }
    }
    return resultList;
}

Employee *getEmployeesWithSalaryMoreThanAverage(Employee *empList) {
    return getEmployeesWithSalaryMoreThan(empList, computeAverageSalary(empList));
}

int main() {
    Employee *empList = NULL;
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int id;
        char name[50];
        double salary;

        printf("Enter details for employee %d (ID Name Salary): ", i + 1);
        scanf("%d %s %lf", &id, name, &salary);

        empList = addEmployee(empList, createEmployee(id, name, salary));
    }

    printf("\nAll Employees:\n");
    printEmployeeList(empList);

    double threshold;
    printf("\nEnter salary threshold: ");
    scanf("%lf", &threshold);

    Employee *filteredEmployees = getEmployeesWithSalaryMoreThan(empList, threshold);
    printf("\nEmployees with salary more than %.2lf:\n", threshold);
    printEmployeeList(filteredEmployees);

    Employee *aboveAverageEmployees = getEmployeesWithSalaryMoreThanAverage(empList);
    printf("\nEmployees with salary more than the average:\n");
    printEmployeeList(aboveAverageEmployees);

    return 0;
}
