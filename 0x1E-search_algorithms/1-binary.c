#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high)
    {
        printf("Searching in array: ");
        for (mid = low; mid < high; mid++) {
            printf("%d, ", array[mid]);
        }
        printf("%d\n", array[high]);
        mid = (low + high) / 2;
        if (array[mid] < value) {
            low = mid + 1;
        } else if (array[mid] > value) {
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}