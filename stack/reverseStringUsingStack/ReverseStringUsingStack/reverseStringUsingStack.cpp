//
//  main.cpp
//  ReverseStringUsingStack
//
//  Created by Sri on 20/10/14.
//  Copyright (c) 2014 $ri. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

void reverse(char *str)
{
    stack<char> stk;
    
    for (int i = 0; i < strlen(str); i++) {
        stk.push(str[i]);
    }
    
    for (int i = 0; i < strlen(str); i++) {
        str[i] = stk.top();
        stk.pop();
    }
}

// Driver program to test above functions
int main()
{
    char str[] = "1234567890";
    
    reverse(str);
    printf("Reversed string is %s\n", str);
    
    return 0;
}
