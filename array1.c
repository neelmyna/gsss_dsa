#include <stdio.h>

int main(int argCount, char *args[])
{
    float a[12];
    printf("Address of array = %u \n", &a);
    printf("Address of 1st element = %u \n", a);
    printf("Address of 2nd element = %u \n", a + 1);
    printf("Value of 1st element = %f \n", a[0]);
    printf("Value of 1st element = %f \n", *a);
    printf("Value of 1st element = %f \n", **(&a));
    printf("Value of 2nd element = %f \n", a[1]);
}