#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    int i;
    for (i = 0; i < (int)size; i++) {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}