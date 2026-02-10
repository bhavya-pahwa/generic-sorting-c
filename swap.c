#include "sorting.h"

void swap(void *a, void *b, int choice) {
    if (choice == 1) {
        int t = *(int *)a;
        *(int *)a = *(int *)b;
        *(int *)b = t;
    } else if (choice == 2) {
        char t = *(char *)a;
        *(char *)a = *(char *)b;
        *(char *)b = t;
    } else if (choice == 3) {
        long t = *(long *)a;
        *(long *)a = *(long *)b;
        *(long *)b = t;
    } else if (choice == 4) {
        float t = *(float *)a;
        *(float *)a = *(float *)b;
        *(float *)b = t;
    } else if (choice == 5) {
        double t = *(double *)a;
        *(double *)a = *(double *)b;
        *(double *)b = t;
    }
}
