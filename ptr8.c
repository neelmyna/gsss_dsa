#include <stdio.h>

int main(int argCount, char *args[])
{
    char c;
    char *pc;
    int i;
    int *pi;
    double d;
    double *pd;
    printf("size of i = %d", sizeof(i));
    printf("size of pi = %d", sizeof(pi));
    printf("size of c = %d", sizeof(c));
    printf("size of pc = %d", sizeof(pc));
    printf("size of d = %d", sizeof(d));
    printf("size of pd = %d", sizeof(pd));
}