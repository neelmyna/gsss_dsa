#include "strcat.h"
#include "strlen.h"

char *strcat(char *destination, char const *source)
{
    int destinationLength = strlen(destination);
    int j = 0;
    for (; source[j] != '\0'; j++)
    {
        destination[destinationLength + j] = source[j];
    }
    destination[destinationLength + j] = '\0';
    return destination;
}
