#include "node.h"
#include "singly_list.h"
#include <stdlib.h>
#include <stdio.h>

struct Node *insertAtFront(struct Node *head)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data of the new node: ");
    scanf("%s", newNode->data);
    newNode->link = NULL;
    if (head == NULL) // if list is empty
        return newNode;
    newNode->link = head;
    return newNode;
}

void insertAtRear(struct Node **head)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data of the new node: ");
    scanf("%s", newNode->data);
    newNode->link = NULL;
    if (*head == NULL)
    { // if list is empty
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->link != NULL)
        temp = temp->link;
    temp->link = newNode;
}

struct Node *insertAtPosition(struct Node *first)
{
    return NULL;
}

void deleteFromFront(struct Node **head)
{
    if (*head == NULL)
    {
        puts("List is empty");
        return;
    }
    struct Node *temp = *head;
    *head = (*head)->link;
    printf("Node with data %s is deleted \n", temp->data);
    free(temp);
}

struct Node *deleteFromRear(struct Node *head)
{
    return NULL;
}

struct Node *deleteFromPosition(struct Node *head)
{
    return NULL;
}

char *searchData(char *data)
{
    return "";
}

void printList(struct Node *head)
{ // Read only function
}

void printListReverse(struct Node *head)
{
}