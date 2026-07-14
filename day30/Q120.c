#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

struct Product p[100];
int count=0;

void addProduct()
{
    printf("Product ID: ");
    scanf("%d",&p[count].id);

    printf("Product Name: ");
    scanf("%s",p[count].name);

    printf("Quantity: ");
    scanf("%d",&p[count].quantity);

    printf("Price: ");
    scanf("%f",&p[count].price);

    count++;
}

void displayProducts()
{
    if(count==0)
    {
        printf("No Products Available\n");
        return;
    }

    printf("\nID\tName\tQty\tPrice\n");

    for(int i=0;i<count;i++)
    {
        printf("%d\t%s\t%d\t%.2f\n",
               p[i].id,
               p[i].name,
               p[i].quantity,
               p[i].price);
    }
}

void searchProduct()
{
    int id;

    printf("Enter Product ID: ");
    scanf("%d",&id);

    for(int i=0;i<count;i++)
    {
        if(p[i].id==id)
        {
            printf("Product Found\n");
            printf("Name: %s\n",p[i].name);
            printf("Quantity: %d\n",p[i].quantity);
            printf("Price: %.2f\n",p[i].price);
            return;
        }
    }

    printf("Product Not Found\n");
}

void deleteProduct()
{
    int id;

    printf("Enter Product ID: ");
    scanf("%d",&id);

    for(int i=0;i<count;i++)
    {
        if(p[i].id==id)
        {
            for(int j=i;j<count-1;j++)
            {
                p[j]=p[j+1];
            }
            count--;
            printf("Product Deleted\n");
            return;
        }
    }

    printf("Product Not Found\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== Inventory Management =====");
        printf("\n1.Add Product");
        printf("\n2.Display Products");
        printf("\n3.Search Product");
        printf("\n4.Delete Product");
        printf("\n5.Exit");
        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:addProduct();break;
            case 2:displayProducts();break;
            case 3:searchProduct();break;
            case 4:deleteProduct();break;
            case 5:return 0;
            default:printf("Invalid Choice");
        }
    }
}