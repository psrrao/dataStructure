//
//  main.c
//  atoi
//
//  Created by Sri on 20/08/14.
//  Copyright (c) 2014 $ri. All rights reserved.
//

/********************************************************************
 
Write your own atoi()

The atoi() function takes a string (which represents an integer)
as an argument and returns its value.

Following is a simple implementation. 
We initialize result as 0. We start from the first character and 
update result for every character.

********************************************************************/


#include <stdio.h>
#define TRUE 1
#define FALSE 0

int isNumChar(char x)
{
    return (x >= '0' && x <= '9')? FALSE : TRUE;
}

int Atoi(char *str)
{
    
    if (str == NULL) {
        printf("NULL String\n");
        return 0;
    }
    
    int res = 0;
    int sign = 1;
    int i = 0;
    
    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    for (; str[i] != '\0'; i++) {
        if (isNumChar(str[i])) {
            printf("String is Alpha Numeric \n");
            return 0;
        }
        res = res * 10 + str[i] - '0';
    }
    return res * sign;
}


int main()
{

    // insert code here...
    char str[] = "-1";
    printf("Convert String into Integer value (atoi)\n");
    int result = Atoi(str);
    printf("String : %s Integer : %d\n",str,result);
    return 0;
}

