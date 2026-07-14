#include <stdio.h>
#include <string.h>

struct Student
{
    char admissionNo[20];
    char name[50];
    int age;
};

int main()
{
    struct Student s[100];
    int n = 0, choice, i, found;
    char admissionNo[20];

    while (1)
    {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Admission Number: ");
                scanf("%s", s[n].admissionNo);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Age: ");
                scanf("%d", &s[n].age);

                n++;
                printf("Student record added successfully!\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("\nNo student records available.\n");
                }
                else
                {
                    printf("\n----- Student Records -----\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nStudent %d\n", i + 1);
                        printf("Admission Number : %s\n", s[i].admissionNo);
                        printf("Name             : %s\n", s[i].name);
                        printf("Age              : %d\n", s[i].age);
                    }
                }
                break;

            case 3:
                found = 0;

                printf("\nEnter Admission Number to Search: ");
                scanf("%s", admissionNo);

                for (i = 0; i < n; i++)
                {
                    if (strcmp(s[i].admissionNo, admissionNo) == 0)
                    {
                        printf("\nStudent Found!\n");
                        printf("Admission Number : %s\n", s[i].admissionNo);
                        printf("Name             : %s\n", s[i].name);
                        printf("Age              : %d\n", s[i].age);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Student not found.\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}