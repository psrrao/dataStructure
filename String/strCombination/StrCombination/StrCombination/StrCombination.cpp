//
//  main.cpp
//  StrCombination
//
//  Created by Sri on 09/09/14.
//  Copyright (c) 2014 $ri. All rights reserved.
//

#include <stdio.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *a, int i, int n)
{
    int j;
    if(i == n)
        printf("%s\n", a);
    else
    {
        for ( j = i ; j <= n; j++) {
            swap(a + i, a + j);
            permute(a, i + 1, n);
            swap(a + i, a + j);
        }
        
    }
    
}

int main()
{
    char a[] = "ABC";
    permute(a, 0, 2);
    return 0;
}

