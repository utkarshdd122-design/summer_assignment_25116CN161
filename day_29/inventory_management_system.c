#include <stdio.h>
#include <string.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item inventory[50];
    int n = 0, choice, i, searchId, found;
    int updateQty;

    do
    {
        printf("\n===== Inventory Management Menu =====\n");
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Search Item by ID\n");
        printf("4. Update Item Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Item ID: ");
            scanf("%d", &inventory[n].id);
            printf("Enter Item Name: ");
            scanf("%s", inventory[n].name);
            printf("Enter Quantity: ");
            scanf("%d", &inventory[n].quantity);
            printf("Enter Price: ");
            scanf("%f", &inventory[n].price);
            n++;
            printf("Item added successfully!\n");
            break;

        case 2:
            printf("\n--- Inventory Records ---\n");
            for (i = 0; i < n; i++)
            {
                printf("ID: %d | Name: %s | Quantity: %d | Price: %.2f\n",
                       inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
            }
            break;

        case 3:
            printf("Enter Item ID to search: ");
            scanf("%d", &searchId);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (inventory[i].id == searchId)
                {
                    printf("Item Found!\n");
                    printf("ID: %d | Name: %s | Quantity: %d | Price: %.2f\n",
                           inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Item with ID %d not found.\n", searchId);
            }
            break;

        case 4:
            printf("Enter Item ID to update quantity: ");
            scanf("%d", &searchId);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (inventory[i].id == searchId)
                {
                    printf("Enter new quantity: ");
                    scanf("%d", &updateQty);
                    inventory[i].quantity = updateQty;
                    printf("Quantity updated successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Item with ID %d not found.\n", searchId);
            }
            break;

        case 5:
            printf("Exiting Inventory Management System. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
