#include "strcat.h"
#include "strlen.h"
#include <stdio.h>

int main(int argCount, char *args[])
{
    char mainString[32] = "";
    char subString[16] = {'\0'};
    puts("Enter the Main string and the sub string");
    scanf("%s%s", mainString, subString);

    strcat(mainString, subString);
    printf("Concatinated string is %s", mainString);
    return 0;
}
