#ifndef SORTING_H
#define SORTING_H

void swap(void *a, void *b, int choice);

void selectionSort(void *arr, int size, int choice);
void bubbleSort(void *arr, int size, int choice);
void insertionSort(void *arr, int size, int choice);
void mergeSort(void *arr, int l, int h, int choice);
void quickSort(void *arr, int l, int h, int choice);

#endif
