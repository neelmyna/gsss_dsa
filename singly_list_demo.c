#include "node.h"
#include "singly_list.h"
#include <stdio.h>

int main()
{
    char data[] = "gsss";
    int choice = 0;
    struct Node *head = NULL;
    do
    {
        puts("1:InsertAtFront 2:InsertAtRear 3:InsertAtPosition 4:DeleteFromFront 5:DeleteFromRear 6:DeleteFromPosition 7:SearchNode 8:PrintList 9:PintListReverse 10:Exit");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = insertAtFront(head);
            break;
        case 2:
            insertAtRear(&head);
            break;
        case 3:
            head = insertAtPosition(head);
            break;
        case 4:
            deleteFromFront(&head);
            break;
        case 5:
            head = deleteFromRear(head);
            break;
        case 6:
            head = deleteFromPosition(head);
            break;
        case 7:

            printf("");
            scanf("");
            searchData(data);
            break;
        case 8:
            printList(head);
            break;
        case 9:
            printListReverse(head);
            break;
        case 10:
            choice = 0;
            break;
        default:
            puts("Invalid choice entered");
        }
    } while (choice != 0);
    puts("End of Program");
}