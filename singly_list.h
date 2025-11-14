#include "node.h"

struct Node *insertAtFront(struct Node *);
void insertAtRear(struct Node **);
struct Node *insertAtPosition(struct Node *);
void deleteFromFront(struct Node **);
struct Node *deleteFromRear(struct Node *);
struct Node *deleteFromPosition(struct Node *);
char *searchData(char *);
void printList(struct Node *); // Read only function
void printListReverse(struct Node *);