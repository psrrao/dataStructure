//
//  main.cpp
//  SwapString
//
//  Created by Sri on 06/09/14.
//  Copyright (c) 2014 $ri. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void SwapStrPtr(char **str1, char **str2)
{
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void SwapStr(char *str1, char *str2)
{
    char *temp = (char *)malloc(sizeof(char)*(strlen(str1)+1));
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main()
{
    char *str1 = "Hello";
    char *str2 = "World";
    printf("Original String:\t str1 = %s,\t str2 = %s\n",str1,str2);
    
    SwapStrPtr(&str1, &str2);
    
    printf("Swapped String:\t str1 = %s,\t str2 = %s\n",str1,str2);
    
    
    char str3[10] = "Hello";
    char str4[10] = "World";
    
    SwapStr(str3, str4);
    
    printf("Swapped String:\t str1 = %s,\t str2 = %s\n",str1,str2);
    
    return 0;
}

