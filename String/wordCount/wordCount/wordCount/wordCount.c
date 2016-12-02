//
//  main.c
//  wordCount
//
//  Created by Sri on 20/08/14.
//  Copyright (c) 2014 $ri. All rights reserved.
//

#include <stdio.h>

#define OUT 0
#define IN 1

unsigned int wcount(char *str)
{
    unsigned int wc = 0;
    int state = OUT;
    
    if (str == NULL) {
        printf("NULL String\n");
        return 0;
    }
    
    while (*str) {
        if (*str == ' ' || *str == '\n' || *str == '\t') {
            state = OUT;
        }else if(state == OUT)
        {
            state = IN;
            ++wc;
        }
        ++str;
    }
    
    return wc;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    char str[] = "Hello  aa a  World";
    printf("Word Count Algorithm\n");
    int result = wcount(str);
    printf("Word count = %d\n",result);
    return 0;
}

