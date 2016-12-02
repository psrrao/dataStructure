//
//  main.c
//  findChainStr
//
//  Created by Sri on 01/09/14.
//  Copyright (c) 2014 $ri. All rights reserved.
//

/*
 Given an array of strings, find if the strings can be chained to form a circle
 Given an array of strings, find if the given strings can be chained to form a circle. A string X can be put before another string Y in circle if the last character of X is same as first character of Y.
 
 Examples:
 
 Input: arr[] = {"geek", "king"}
 Output: Yes, the given strings can be chained.
 Note that the last character of first string is same
 as first character of second string and vice versa is
 also true.
 
 Input: arr[] = {"for", "geek", "rig", "kaf"}
 Output: Yes, the given strings can be chained.
 The strings can be chained as "for", "rig", "geek"
 and "kaf"
 
 Input: arr[] = {"aab", "bac", "aaa", "cda"}
 Output: Yes, the given strings can be chained.
 The strings can be chained as "aaa", "aab", "bac"
 and "cda"
 
 Input: arr[] = {"aaa", "bbb", "baa", "aab"};
 Output: Yes, the given strings can be chained.
 The strings can be chained as "aaa", "aab", "bbb"
 and "baa"
 
 Input: arr[] = {"aaa"};
 Output: Yes
 
 Input: arr[] = {"aaa", "bbb"};
 Output: No
 
 */
#include <stdio.h>
#include <string.h>


int canBeChained(char **str, int len)
{
    int startCharL, endCharL;
    startCharL = endCharL = 0;
    
    for (int i = 0; i < len; i++) {
        int l = (int)strlen(str[i]);
        
        startCharL = startCharL + str[i][0];
        endCharL = endCharL + str[i][l-1];
    }
    if (startCharL == endCharL)
        return 1;
    else
        return 0;
    
}

int main()
{

    int n1, n2;
    char *arr1[] =  {"for", "geek", "rig", "kaf"};
    char *arr2[] =  {"aab", "babt"};
    
    n1 = sizeof(arr1)/sizeof(arr1[0]);
    canBeChained(arr1, n1)?  printf("Can be chained \n") : printf("Can't be chained \n");
    
    n2 = sizeof(arr2)/sizeof(arr2[0]);
    canBeChained(arr2, n2)?  printf("Can be chained \n") : printf("Can't be chained \n");
    return 0;
}

