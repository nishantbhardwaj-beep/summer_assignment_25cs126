#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

struct Book b[100];
int count=0;

void addBook()
{
    printf("Book ID: ");
    scanf("%d",&b[count].id);

    printf("Book Name: ");
    scanf("%s",b[count].name);

    printf("Author: ");
    scanf("%s",b[count].author);

    count++;
}

void displayBooks()
{
    if(count==0)
    {
        printf("No Books Available\n");
        return;
    }

    printf("\nID\tBook\tAuthor\n");

    for(int i=0;i<count;i++)
    {
        printf("%d\t%s\t%s\n",b[i].id,b[i].name,b[i].author);
    }
}

void searchBook()
{
    int id;

    printf("Enter Book ID: ");
    scanf("%d",&id);

    for(int i=0;i<count;i++)
    {
        if(b[i].id==id)
        {
            printf("Book: %s\n",b[i].name);
            printf("Author: %s\n",b[i].author);
            return;
        }
    }

    printf("Book Not Found\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n1.Add Book");
        printf("\n2.Display Books");
        printf("\n3.Search Book");
        printf("\n4.Exit");
        printf("\nChoice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:addBook();break;
            case 2:displayBooks();break;
            case 3:searchBook();break;
            case 4:return 0;
            default:printf("Invalid Choice");
        }
    }
}