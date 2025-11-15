#include "node.c"
#include "singly_list.h"
#include <stdlib.h>
#include <stdio.h>

Node *insertAtFront(Node *head)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    printf("Enter data of the new node: ");
    scanf("%s", newNode->data);
    newNode->link = NULL;
    if (head == NULL) // if list is empty
        return newNode;
    newNode->link = head;
    return newNode;
}

void insertAtRear(Node **head)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    printf("Enter data of the new node: ");
    scanf("%s", newNode->data);
    newNode->link = NULL;
    if (*head == NULL)
    { // if list is empty
        *head = newNode;
        return;
    }
    Node *temp = *head;
    while (temp->link != NULL)
        temp = temp->link;
    temp->link = newNode;
}

Node *insertAtPosition(Node *first)
{
    return NULL;
}

void deleteFromFront(Node **head)
{
    if (*head == NULL)
    {
        puts("List is empty");
        return;
    }
    Node *temp = *head;
    *head = (*head)->link;
    printf("Node with data %s is deleted \n", temp->data);
    free(temp);
}

Node *deleteFromRear(Node *head)
{
    return NULL;
}

Node *deleteFromPosition(Node *head)
{
    return NULL;
}

char *searchData(char *data)
{
    return "";
}

void printList(Node *head)
{ // Read only function
}

void printListReverse(Node *head)
{
}