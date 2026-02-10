#include "sorting.h"

void selectionSort(void *arr, int n, int choice) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (
                (choice == 1 && ((int *)arr)[j] < ((int *)arr)[min]) ||
                (choice == 2 && ((char *)arr)[j] < ((char *)arr)[min]) ||
                (choice == 3 && ((long *)arr)[j] < ((long *)arr)[min]) ||
                (choice == 4 && ((float *)arr)[j] < ((float *)arr)[min]) ||
                (choice == 5 && ((double *)arr)[j] < ((double *)arr)[min])
            ) min = j;
        }
        if (min != i)
            swap((char *)arr + i, (char *)arr + min, choice);
    }
}
