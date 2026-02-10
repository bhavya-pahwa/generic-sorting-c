#include "sorting.h"

void bubbleSort(void *arr, int n, int choice) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (choice == 1 && ((int *)arr)[j] > ((int *)arr)[j+1])
                swap(&((int *)arr)[j], &((int *)arr)[j+1], choice);

            else if (choice == 2 && ((char *)arr)[j] > ((char *)arr)[j+1])
                swap(&((char *)arr)[j], &((char *)arr)[j+1], choice);

            else if (choice == 3 && ((long *)arr)[j] > ((long *)arr)[j+1])
                swap(&((long *)arr)[j], &((long *)arr)[j+1], choice);

            else if (choice == 4 && ((float *)arr)[j] > ((float *)arr)[j+1])
                swap(&((float *)arr)[j], &((float *)arr)[j+1], choice);

            else if (choice == 5 && ((double *)arr)[j] > ((double *)arr)[j+1])
                swap(&((double *)arr)[j], &((double *)arr)[j+1], choice);
        }
    }
}
