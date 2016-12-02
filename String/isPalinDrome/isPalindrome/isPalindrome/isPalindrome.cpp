 //
//  main.cpp
//  isPalindrome
//
//  Created by Sri on 06/09/14.
//  Copyright (c) 2014 $ri. All rights reserved.
//


#include <stdio.h>
#include <string.h>

void isPalindrome(char *str)
{
    int l = 0;
    int h = strlen(str) - 1;
    
    while (h > l) {
        if (str[l++] != str[h--]) {
            printf("%s is not a Palindrome\n",str);
            return;
        }
    }
    
    printf("%s is a Palindrome\n",str);
}


int main()
{
    isPalindrome("abba");
    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    return 0;
}
