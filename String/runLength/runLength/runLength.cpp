//
//  main.cpp
//  runLength
//
//  Created by Sri on 04/11/14.
//  Copyright (c) 2014 $ri. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#define MAX_RLEN 50

using namespace std;

char *encode(char *src)
{
    int rlen = 0;
    int j = 0;
    char count[MAX_RLEN];
    size_t len = strlen(src);
    
    char *dest = (char*)malloc((2*len + 1)* sizeof(char));
    for(int i = 0; i < len; i++)
    {
        dest[j++] = src[i];
        rlen = 1;
        
        while( i+1 < len && src[i] == src[i+1])
        {
            rlen++;
            i++;
        }
        
        sprintf(count, "%d",rlen);
        
        for(int k = 0; *(count + k); k++)
        {
            dest[j++] = count[k];
        }
    }
    dest[j] = '\0';
    return dest;
}

/*driver program to test above function */
int main()
{
    char str[] = "wwwwaaadexxxxxx";
    char *res = encode(str);
    printf("%s", res);
    getchar();
}