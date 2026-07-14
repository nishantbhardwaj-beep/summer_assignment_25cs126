#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

struct Employee e[100];
int count=0;

void addEmployee()
{
    printf("Employee ID: ");
    scanf("%d",&e[count].id);

    printf("Employee Name: ");
    scanf("%s",e[count].name);

    printf("Salary: ");
    scanf("%f",&e[count].salary);

    count++;
}

void displayEmployees()
{
    if(count==0)
    {
        printf("No Employee Records\n");
        return;
    }

    printf("\nID\tName\tSalary\n");

    for(int i=0;i<count;i++)
    {
        printf("%d\t%s\t%.2f\n",e[i].id,e[i].name,e[i].salary);
    }
}

void searchEmployee()
{
    int id;

    printf("Enter Employee ID: ");
    scanf("%d",&id);

    for(int i=0;i<count;i++)
    {
        if(e[i].id==id)
        {
            printf("Name: %s\n",e[i].name);
            printf("Salary: %.2f\n",e[i].salary);
            return;
        }
    }

    printf("Employee Not Found\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n1.Add Employee");
        printf("\n2.Display Employees");
        printf("\n3.Search Employee");
        printf("\n4.Exit");
        printf("\nChoice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:addEmployee();break;
            case 2:displayEmployees();break;
            case 3:searchEmployee();break;
            case 4:return 0;
            default:printf("Invalid Choice");
        }
    }
}