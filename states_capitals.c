#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int arg_count, char **args)
{
    char states[50][32] = {""};
    char capitals[50][32] = {""};
    char *addressOfSpace = NULL;
    for (int i = 1; i < arg_count; i++)
    {
        addressOfSpace = strchr(args[i], ' ');
        int numberOfCharacters = addressOfSpace - args[i];
        strncpy(states[i - 1], args[i], numberOfCharacters);
        strcpy(capitals[i - 1], addressOfSpace + 1);
    }
    printf("%-15s %s\n", "STATES", "CAPITALS");
    printf("----------------------------\n");
    for (int i = 0; i < arg_count - 1; i++)
    {
        printf("%-15s %s\n", states[i], capitals[i]);
    }
}
/*
for each pair of s-c do:
    find address of space
    copy the state from args to states
    copy the capital from args to capitals
    print states and capitals
*/