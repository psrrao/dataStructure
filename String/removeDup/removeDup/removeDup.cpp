//
//  main.cpp
//  removeDup
//
//  Created by Sri on 04/11/14.
//  Copyright (c) 2014 $ri. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
#include <map>

#define NO_OF_CHARS 256

using namespace std;

char *removeDups(char *str)
{
    bool hash_map[NO_OF_CHARS] = {0};
    int ip_index = 0;
    int res_index = 0;
    
    while(*(str + ip_index))
    {
        char temp = *(str + ip_index);
        if(hash_map[temp] == 0)
        {
            hash_map[temp] = 1;
            *(str + res_index) = *(str + ip_index);
            res_index++;
        }
        ip_index++;
    }
    *(str + res_index) = '\0';
    return str;
}

/* Driver program to test removeDups */
int main()
{
    char str[] = "geeksforgeeks";
    printf("%s", removeDups(str));
    return 0;
}