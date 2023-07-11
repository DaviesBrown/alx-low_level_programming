#include <math.h>
#include "search_algos.h"

int jump_search(int *array, size_t size, int value)
{
    int i = 0;
    int j = sqrt(size);

    printf("Value checked array[%d] = [%d]\n", i, array[i]);
    while (array[j - 1] < value && j < (int)size)
    {
        i = j;
        j += sqrt(size);
    printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (i >= (int)size) {
            return -1;
        }
    }
    printf("Value found between indexes [%d] and [%d]\n", i, j);
    while (array[i] < value) {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        i = i + 1;
        if (i == j) {
            return -1;
        }
    }
    if (array[i] == value) {
        return i;
    } else {
        return -1;
    }
}