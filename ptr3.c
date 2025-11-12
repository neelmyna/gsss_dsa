#include <stdio.h>

int main(int argCount, char *args[])
{
    long long int num = 21; // signed long int
    printf("%lld  %lld  %lld  %lld \n", num - 1, num, num + 1, num + 2);
    //     20   21  22  23
    printf("%u  %u  %u  %u", &num - 1, &num, &num + 1, &num + 2);
}