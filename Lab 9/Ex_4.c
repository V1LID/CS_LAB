#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    double salary;
};


int compare(struct Employee *emp1, struct Employee *emp2) {
    if (emp1->salary > emp2->salary) {
        return 1;
    } else if (emp1->salary < emp2->salary) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
   
    struct Employee emp1 = {1, "Alice", 60000};
    struct Employee emp2 = {2, "Bob", 70000};

   
    int result = compare(&emp1, &emp2);

  
    if (result > 0) {
        printf("%s has a higher salary than %s.\n", emp1.name, emp2.name);
    } else if (result < 0) {
        printf("%s has a lower salary than %s.\n", emp1.name, emp2.name);
    } else {
        printf("%s and %s have equal salaries.\n", emp1.name, emp2.name);
    }

    return 0;
}
