#include "node.h"

struct Node
{
    char data[32];
    struct Node *link;
};