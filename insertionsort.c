#include "sorting.h"

void insertionSort(void *arr, int n, int choice) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0) {
            if (
                (choice == 1 && ((int *)arr)[j] < ((int *)arr)[j-1]) ||
                (choice == 2 && ((char *)arr)[j] < ((char *)arr)[j-1]) ||
                (choice == 3 && ((long *)arr)[j] < ((long *)arr)[j-1]) ||
                (choice == 4 && ((float *)arr)[j] < ((float *)arr)[j-1]) ||
                (choice == 5 && ((double *)arr)[j] < ((double *)arr)[j-1])
            ) {
                swap((char *)arr + j, (char *)arr + j - 1, choice);
                j--;
            } else break;
        }
    }
}
