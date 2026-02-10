#include "sorting.h"

static int partition(void *arr, int low, int high, int choice) {
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (
            (choice == 1 && ((int *)arr)[j] <= ((int *)arr)[high]) ||
            (choice == 2 && ((char *)arr)[j] <= ((char *)arr)[high]) ||
            (choice == 3 && ((long *)arr)[j] <= ((long *)arr)[high]) ||
            (choice == 4 && ((float *)arr)[j] <= ((float *)arr)[high]) ||
            (choice == 5 && ((double *)arr)[j] <= ((double *)arr)[high])
        ) {
            i++;
            swap((char *)arr + i, (char *)arr + j, choice);
        }
    }
    swap((char *)arr + i + 1, (char *)arr + high, choice);
    return i + 1;
}

void quickSort(void *arr, int low, int high, int choice) {
    if (low < high) {
        int p = partition(arr, low, high, choice);
        quickSort(arr, low, p - 1, choice);
        quickSort(arr, p + 1, high, choice);
    }
}
