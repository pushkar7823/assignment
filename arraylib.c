#include <stdio.h>
#include "arraylib.h"

void displayArray(int arr[], int size){
    printf("Array elements: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findMaxIndex(int arr[], int size){
    int maxIndex = 0;
    for(int i=1; i<size; i++){
        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }
    return maxIndex;
}

int findMinIndex(int arr[], int size){
    int minIndex = 0;
    for(int i=1; i<size; i++){
        if(arr[i] < arr[minIndex])
            minIndex = i;
    }
    return minIndex;
}

float findAverage(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++)
        sum += arr[i];
    return (float)sum / size;
}

void reverseArray(int arr[], int size){
    int temp;
    for(int i=0; i<size/2; i++){
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void sortArray(int arr[], int size){
    int temp;
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int linearSearch(int arr[], int size, int value){
    for(int i=0; i<size; i++){
        if(arr[i] == value)
            return i;
    }
    return -1;
}
