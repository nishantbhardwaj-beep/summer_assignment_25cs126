#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int count = 0;

void addStudent()
{
    printf("Enter Roll: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf("%s", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;
}

void displayStudents()
{
    if(count==0)
    {
        printf("No Records!\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");

    for(int i=0;i<count;i++)
    {
        printf("%d\t%s\t%.2f\n",s[i].roll,s[i].name,s[i].marks);
    }
}

void searchStudent()
{
    int roll;

    printf("Enter Roll Number: ");
    scanf("%d",&roll);

    for(int i=0;i<count;i++)
    {
        if(s[i].roll==roll)
        {
            printf("Name: %s\n",s[i].name);
            printf("Marks: %.2f\n",s[i].marks);
            return;
        }
    }

    printf("Student Not Found!\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n1.Add Student");
        printf("\n2.Display Students");
        printf("\n3.Search Student");
        printf("\n4.Exit");
        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: return 0;
            default: printf("Invalid Choice");
        }
    }
}