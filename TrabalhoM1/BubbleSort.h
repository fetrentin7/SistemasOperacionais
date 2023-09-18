#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CAPACIDADE 200
void bubbleSort(int arr[]) {

    int temp = 0;
   
    for (int i = 0; i < CAPACIDADE - 1; i++) {
        for (int j = 0; j < CAPACIDADE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}