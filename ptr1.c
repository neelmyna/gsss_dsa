#include <stdio.h>

int main(int argCount, char *args[])
{
    float num = 5.507f;
    printf("Value of Num = %.2f \n", num);
    printf("Address of Num = %p \n", &num);
    printf("Value of Num = %.1f \n", *(&num));
}