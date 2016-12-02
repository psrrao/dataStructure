//
//  main.c
//  BubbleSort
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

void bubbleSort(int arr[], int num)
{
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num-1-i; j++) {
            if (arr[j+1] < arr[j] ) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(int argc, const char * argv[])
{

    // insert code here...
    int arr[] = {1, 4, 5, 3, 2, 6, 8, 7, 9, 0};
    printf("Bubble Sort...!!!\n");
    bubbleSort(arr,10);
    printArray(arr, 10);
    return 0;
}

