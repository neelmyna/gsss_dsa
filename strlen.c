#include "strlen.h"
int strlen(char const *string)
{
    int i = 0;
    for (; string[i] != '\0'; i++) // *(string + i)
        ;
    return i;
}