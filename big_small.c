#include <stdlib.h>
#include <stdio.h>

int main(int arg_count, char **args)
{
    int size = atoi(args[1]);
    int *array = NULL;
    if (size > 0 && size <= 1000)
        array = (int *)malloc(sizeof(int) * size);
    // int* array = new int[size];
    // printf("%d  %u \n", size, array);
    printf("Enter %d numbers of the Array \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    int bigNum = array[0], smallNum = array[0];
    for (int i = 1; i < size; i++)
    {
        if (bigNum < array[i])
            bigNum = array[i];
        if (smallNum > array[i])
            smallNum = array[i];
    }
    printf("Biggest number in array is %d \n", bigNum);
    printf("smallest number in array is %d \n", smallNum);
}
