#include <stdlib.h>
#include <stdio.h>

int main(int argCount, char **args)
{ // char** args
    int size = atoi(args[1]);

    printf("Argc = %d", argCount);
    printf("size of Argc = %d", sizeof(argCount));
    printf("size of Args = %d", sizeof(args));
}