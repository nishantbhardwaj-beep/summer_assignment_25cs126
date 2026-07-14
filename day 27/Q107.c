#include <stdio.h>

struct Salary {

    int id;
    char name[50];
    float basic, hra, da, net;

};

int main() {

    struct Salary s[100];
    int n = 0, choice, i;

    while (1) {

        printf("\n1.Add Salary\n2.Display Salaries\n3.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:

            printf("Employee ID: ");
            scanf("%d", &s[n].id);

            printf("Name: ");
            scanf("%s", s[n].name);

            printf("Basic Salary: ");
            scanf("%f", &s[n].basic);

            printf("HRA: ");
            scanf("%f", &s[n].hra);

            printf("DA: ");
            scanf("%f", &s[n].da);

            s[n].net = s[n].basic + s[n].hra + s[n].da;

            n++;

            break;

        case 2:

            for (i = 0; i < n; i++) {

                printf("ID:%d Name:%s Net Salary: %.2f\n",
                       s[i].id,
                       s[i].name,
                       s[i].net);
            }

            break;

        case 3:
            return 0;
        }
    }
}