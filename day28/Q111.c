#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char passenger[50];
    char destination[50];
};

int main()
{
    struct Ticket t[50];
    int n, i;

    printf("Enter number of bookings: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBooking %d\n", i + 1);

        printf("Ticket Number: ");
        scanf("%d", &t[i].ticketNo);

        printf("Passenger Name: ");
        scanf(" %[^\n]", t[i].passenger);

        printf("Destination: ");
        scanf(" %[^\n]", t[i].destination);
    }

    printf("\n------ Ticket Details ------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nTicket No : %d", t[i].ticketNo);
        printf("\nPassenger : %s", t[i].passenger);
        printf("\nDestination : %s\n", t[i].destination);
    }

    return 0;
}