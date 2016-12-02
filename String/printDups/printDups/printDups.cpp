//
//  main.cpp
//  printDups
//
//  Created by Sri on 04/11/14.
//  Copyright (c) 2014 $ri. All rights reserved.
//
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
#include <stack>
#include <cstdlib>

#define NO_OF_CHARS 256
using namespace std;

int *getCharCount(char *str)
{
    int *count = (int*)calloc(NO_OF_CHARS, sizeof(int));
    
    for(int i = 0; *(str + i); i++)
    {
        count[*(str + i)]++;
    }
    return count;
}


void printDups(char *str)
{
    int *count = getCharCount(str);
    for(int i = 0; i < NO_OF_CHARS; i++)
    {
        if(count[i] > 1)
            printf("%c = %d\n",i,count[i]);
    }
    free(count);
}

/* Driver program to test to pront printDups*/
int main()
{
    char str[] = "test string";
    printDups(str);
    getchar();
    return 0;
}
