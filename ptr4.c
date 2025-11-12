#include <stdio.h>

int main(int argCount, char *args[])
{
    float num = 5.5f;
    float *ptr = &num;
    printf("Value of Num (num)= %f \n", num);
    printf("Value of Num(*(&num))= %f \n", *(&num));
    printf("Value of Num = %f \n", *ptr);
    printf("Address of Num = %p \n", &num);
    printf("Address of Num = %p \n", ptr);
    printf("Value of Num = %f \n", **(&ptr));
    printf("Address of Ptr = %p \n", &ptr);
}