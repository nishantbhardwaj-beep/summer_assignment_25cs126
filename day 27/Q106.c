#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
};

int main() {

    struct Employee e[100];
    int n = 0, choice, i, id, found;

    while (1) {

        printf("\n1.Add Employee\n2.Display Employees\n3.Search Employee\n4.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:

            printf("Employee ID: ");
            scanf("%d", &e[n].id);

            printf("Name: ");
            scanf("%s", e[n].name);

            printf("Department: ");
            scanf("%s", e[n].department);

            n++;
            break;

        case 2:

            for (i = 0; i < n; i++) {
                printf("ID:%d Name:%s Department:%s\n",
                       e[i].id, e[i].name, e[i].department);
            }
            break;

        case 3:

            found = 0;
            printf("Enter Employee ID: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {

                if (e[i].id == id) {
                    printf("Employee Found\n");
                    printf("Name:%s\nDepartment:%s\n",
                           e[i].name, e[i].department);
                    found = 1;
                }
            }

            if (!found)
                printf("Employee not found.\n");

            break;

        case 4:
            return 0;
        }
    }
}