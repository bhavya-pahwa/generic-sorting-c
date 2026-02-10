#include <stdlib.h>
#include "sorting.h"

static void merge(void *arr, int l, int m, int r, int choice) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    if (choice == 1) {
        int *L = malloc(n1 * sizeof(int));
        int *R = malloc(n2 * sizeof(int));

        for (i = 0; i < n1; i++) L[i] = ((int *)arr)[l + i];
        for (j = 0; j < n2; j++) R[j] = ((int *)arr)[m + 1 + j];

        i = j = 0; k = l;
        while (i < n1 && j < n2)
            ((int *)arr)[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];

        while (i < n1) ((int *)arr)[k++] = L[i++];
        while (j < n2) ((int *)arr)[k++] = R[j++];

        free(L); free(R);
    }
    /* same pattern applies for char, long, float, double */
}

void mergeSort(void *arr, int l, int r, int choice) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m, choice);
        mergeSort(arr, m + 1, r, choice);
        merge(arr, l, m, r, choice);
    }
}
