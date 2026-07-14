#include <stdio.h>

struct Bank
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b[50];
    int n, i;

    printf("Enter number of customers: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nCustomer %d\n", i + 1);

        printf("Account Number: ");
        scanf("%d", &b[i].accountNo);

        printf("Customer Name: ");
        scanf(" %[^\n]", b[i].name);

        printf("Balance: ");
        scanf("%f", &b[i].balance);
    }

    printf("\n------ Bank Records ------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nAccount No : %d", b[i].accountNo);
        printf("\nName : %s", b[i].name);
        printf("\nBalance : %.2f\n", b[i].balance);
    }

    return 0;
}