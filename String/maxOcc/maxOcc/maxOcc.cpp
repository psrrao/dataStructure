//
//  main.cpp
//  maxOcc
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

char getMaxIndex(int count[], int cnt_size)
{
    int max_index = 0;
    for(int i = 0; i < cnt_size; i++)
    {
        if(count[max_index] < count[i])
            max_index = i;
    }
    return max_index;
}

char getMaxOccuringChar(char *str)
{
    int *count = getCharCount(str);
    int max_index = getMaxIndex(count, NO_OF_CHARS);
    free(count);
    return max_index;
}

int main()
{
    char str[] = "sample string";
    printf("%c", getMaxOccuringChar(str));
    return 0;
}

