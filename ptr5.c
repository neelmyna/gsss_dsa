#include <stdio.h>

int main(int argCount, char *args[])
{
    int num = 400;
    int ptr = &num; // Mistake
    printf("%d  %d  %d  %d  \n", num - 1, num, num + 1,
           num + 2);
    // 399  400  401  402
    printf("%u  %u  %u  %u  \n", ptr - 1, ptr, ptr + 1,
           ptr + 2);
    //
}