#include <stdio.h>

int main() {
    int arr[50], n, choice, i, pos, val, search, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n===== Array Operation Menu =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Array elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter position (1-%d): ", n+1);
                scanf("%d", &pos);
                printf("Enter value to insert: ");
                scanf("%d", &val);
                if(pos >= 1 && pos <= n+1) {
                    for(i = n; i >= pos; i--) {
                        arr[i] = arr[i-1];
                    }
                    arr[pos-1] = val;
                    n++;
                    printf("Element inserted successfully!\n");
                } else {
                    printf("Invalid position!\n");
                }
                break;

            case 3:
                printf("Enter position (1-%d) to delete: ", n);
                scanf("%d", &pos);
                if(pos >= 1 && pos <= n) {
                    for(i = pos-1; i < n-1; i++) {
                        arr[i] = arr[i+1];
                    }
                    n--;
                    printf("Element deleted successfully!\n");
                } else {
                    printf("Invalid position!\n");
                }
                break;

            case 4:
                printf("Enter value to search: ");
                scanf("%d", &search);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(arr[i] == search) {
                        printf("Element %d found at position %d.\n", search, i+1);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Element not found!\n");
                }
                break;

            case 5:
                printf("Exiting Array Operation System. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);

    return 0;
}
