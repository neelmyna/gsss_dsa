#include <stdio.h>

int main(int argCount, char *args[])
{
    float num = 5.5f;
    float *ptr = &num;
    float **pp = &ptr;
    printf("Value of pp (pp)= %u \n", pp);
    printf("Address of pp (pp)= %f \n", &pp);
    printf("Value of ptr (*pp)= %u \n", *pp);
    printf("Address of ptr (pp)= %f \n", pp);
    printf("Value of num (**pp)= %u \n", **pp);
    printf("Address of num (*pp)= %f \n", *pp);
    printf("Value of num (***(&pp))= %u \n", ***(&pp));
}