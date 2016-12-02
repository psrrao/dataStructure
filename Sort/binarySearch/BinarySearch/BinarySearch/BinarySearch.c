//
//  main.c
//  BinarySearch
//
//  Created by Sri on 06/08/14.
//  Copyright (c) 2014 $ri. All rights reserved.
//

#include <stdio.h>

int RecursiveBinarySearch(int arr[], int left, int right, int SearchVal)
{
    int mid;
    if (right >= 1) {
        mid = 1 + (right - 1)/2;
        if (arr[mid] == SearchVal) {
            return mid;
        }
        if (arr[mid] > SearchVal) {
            return RecursiveBinarySearch(arr, left, mid-1, SearchVal);
        }
        else
        {
            return RecursiveBinarySearch(arr, mid+1, right, SearchVal);
        }
    }
    return -1;
}

int IterativeBinarySearch(int arr[], int left, int right, int SearchVal)
{
    
    while(left <= right)
    {
        int mid = (left + right)/2;
        
        if (arr[mid] == SearchVal) {
            return mid;
        }
        
        if (arr[mid] < SearchVal) {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        
    }
    return -1;
}

int main()
{
    // Binary Search Algorith methods
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int left = 0;
    int right = sizeof(arr)/sizeof(int);
    int SearchVal = 0;
    
    printf("Binary Search Algorithm\n");
    
    //int SearchIndex = RecursiveBinarySearch(arr, left, right, SearchVal);
    
    
    int SearchIndex = IterativeBinarySearch(arr, left, right, SearchVal);
    
    (SearchIndex == -1 ) ?  printf("Search Value not found in the array" )
                         :  printf("Search Index Value = %d",SearchIndex);
    
    return 0;
}

