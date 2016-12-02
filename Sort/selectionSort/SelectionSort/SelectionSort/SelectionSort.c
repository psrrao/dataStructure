//
//  main.c
//  SelectionSort
//
//  Created by Sri on 10/08/14.
//  Copyright (c) 2014 $ri. All rights reserved.
//

#include <stdio.h>


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int num )
{
    for (int i = 0; i < num; i++) {
        printf("%d,\t",arr[i]);
    }
}

void selectionSort(int arr[], int num)
{
    for (int i = 0; i < num -1 ; i++) {
        int min_index = i;
        for (int j = i+1; j < num; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(&arr[min_index], &arr[i]);
    }
    
}

int main(int argc, const char * argv[])
{
    
    // insert code here...
    int arr[] = {1, 4, 5, 3, 2, 6, 8, 7, 9, 0};
    printf("Selection Sort...!!!\n");
    selectionSort(arr,10);
    printArray(arr, 10);
    return 0;
}
