#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "sorting.h"

//function return 1 if input is integer else return 0.
int isInteger(char *input){
    // for empty case
    if(*input=='\0'){
        return 0;
    }

    // checking each character in the input string
    while(*input!='\0'){
        if(!isdigit(*input)){
            return 0;
        }
        input++;
    }
    return 1;
}

int main(){
    // choice for datatype.
    int datatype_choice;
    printf("Enter 1 for Array of  Integer Datatype.\nEnter 2 for Array of  Character  Datatype.\nEnter 3 for Array of  Long Datatype.\nEnter 4 for Array of  Float Datatype. \nEnter 5 for Array of  Double Datatype.\n");
    scanf("%d",&datatype_choice);
    printf("\n");
    if(datatype_choice>5 || datatype_choice<1){
        printf("Invalid Choice for  Datatype!\n");
        exit(1);
    }

    // choice for sorting algoritm.
    int sort_choice;
    printf("Enter 1 to use Selection Sort.\nEnter 2 to use Bubble Sort.\nEnter 3 to use Insertion Sort.\nEnter 4 to use Merge Sort.\nEnter 5 to use Quick Sort.\n");
    scanf("%d",&sort_choice);
    printf("\n");
    if(sort_choice>5 || sort_choice<1){
        printf("Invalid Choice for Sorting Algorithm!\n");
        exit(1);
    }

   // Input of size.
    printf("Enter the size of array: ");
    char size_array[100];
    scanf(" %99s", size_array);
    int size=0;
    if(isInteger(size_array)==0){
        printf("Invalid Size\n");
        exit(1);
    }

    //converting the size_array into size
    int i=0;
    while(size_array[i]!='\0'){
        size=(size*10)+(size_array[i]-'0');
        i++;
    }

    // Enter the elememts according to their datatype choice. 
    printf("Enter the Elements of Array\n");
  
    //if user choice integer datatype.
    if(datatype_choice==1){
        int *arr_of_int = (int *)malloc(size*sizeof(int));
        for(int i=0;i<size;i++){
            scanf("%d",&arr_of_int[i]);
        }
        printf("Sorted Array\n");
        switch(sort_choice){
            case 1:
                selectionSort(arr_of_int,size,datatype_choice);
                break;
            case 2:
                bubbleSort(arr_of_int,size,datatype_choice);
                break;
            case 3:
                insertionSort(arr_of_int,size,datatype_choice);
                break;
            case 4:
                mergeSort(arr_of_int,0,size-1,datatype_choice);
                break;
            case 5:
                quickSort(arr_of_int,0,size-1,datatype_choice);
                break;
        }
        for(int i=0;i<size;i++){
            printf("%d ",arr_of_int[i]);
        }
        printf("\n");
        free(arr_of_int);
    }

    //if user choice character datatype.
    else if(datatype_choice==2){
        char* arr_of_char=(char *)malloc(size*sizeof(char));
        for(int i=0;i<size;i++){
            scanf(" %c",&arr_of_char[i]);
        }
        printf("Sorted Array\n");
        switch(sort_choice){
            case 1:
                selectionSort(arr_of_char,size,datatype_choice);
                break;
            case 2:
                bubbleSort(arr_of_char,size,datatype_choice);
                break;
            case 3:
                insertionSort(arr_of_char,size,datatype_choice);
                break;
            case 4:
                mergeSort(arr_of_char,0,size-1,datatype_choice);
                break;
            case 5:
                quickSort(arr_of_char,0,size-1,datatype_choice);
                break;
        }
        for(int i=0;i<size;i++){
            printf("%c ",arr_of_char[i]);
        }
        printf("\n");
        free(arr_of_char);
    }

    //if user choice long datatype.
    else if(datatype_choice==3){
        long* arr_of_long=(long *)malloc(size*sizeof(long));
        for(int i=0;i<size;i++){
            scanf("%ld",&arr_of_long[i]);
        }
        printf("Sorted Array\n");
        switch(sort_choice){
            case 1:
                selectionSort(arr_of_long,size,datatype_choice);
                break;
            case 2:
                bubbleSort(arr_of_long,size,datatype_choice);
                break;
            case 3:
                insertionSort(arr_of_long,size,datatype_choice);
                break;
            case 4:
                mergeSort(arr_of_long,0,size-1,datatype_choice);
                break;
            case 5:
                quickSort(arr_of_long,0,size-1,datatype_choice);
                break;
        }
        for(int i=0;i<size;i++){
            printf("%ld ",arr_of_long[i]);
        }
        printf("\n");
        free(arr_of_long);
    }

    //if user choice float datatype.
    else if(datatype_choice==4){
        float* arr_of_float=(float *)malloc(size*sizeof(float));
        for(int i=0;i<size;i++){
            scanf("%f",&arr_of_float[i]);
        }
        printf("Sorted Array\n");
        switch(sort_choice){
            case 1:
                selectionSort(arr_of_float,size,datatype_choice);
                break;
            case 2:
                bubbleSort(arr_of_float,size,datatype_choice);
                break;
            case 3:
                insertionSort(arr_of_float,size,datatype_choice);
                break;
            case 4:
                mergeSort(arr_of_float,0,size-1,datatype_choice);
                break;
            case 5:
                quickSort(arr_of_float,0,size-1,datatype_choice);
                break;
        }
        for(int i=0;i<size;i++){
            printf("%f ",arr_of_float[i]);
        }
        printf("\n");
        free(arr_of_float);
    }

    //if user choice double datatype.
    else if(datatype_choice==5){
        double* arr_of_double=(double *)malloc(size*sizeof(double));
        for(int i=0;i<size;i++){
            scanf("%lf",&arr_of_double[i]);
        }
        printf("Sorted Array\n");
        switch(sort_choice){
            case 1:
                selectionSort(arr_of_double,size,datatype_choice);
                break;
            case 2:
                bubbleSort(arr_of_double,size,datatype_choice);
                break;
            case 3:
                insertionSort(arr_of_double,size,datatype_choice);
                break;
            case 4:
                mergeSort(arr_of_double,0,size-1,datatype_choice);
                break;
            case 5:
                quickSort(arr_of_double,0,size-1,datatype_choice);
                break;
        }
        for(int i=0;i<size;i++){
            printf("%lf ",arr_of_double[i]);
        }
        printf("\n");
        free(arr_of_double);
    }
    return 0;
}
