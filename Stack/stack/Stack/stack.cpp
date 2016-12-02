//
//  stack.cpp
//  Stack
//
//  Created by Sri on 08/07/14.
//  Copyright (c) 2014 $ri. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int topStack = -1;
int size = 0;

void pushStack(int *ptrStack, int value)
{
	if(topStack == size -1)3
	{
		printf("Stack Overflow/Full\n");
	}
	else
	{
		ptrStack[++topStack] = value;
	}
}

void popStack(int *ptrStack)
{
	if (topStack < 0)
	{
		printf("Stack UnderFlow/Empty\n");
	}
	else
	{
		ptrStack[topStack--] = 0;
	}
}

void showStack(int *ptrStack)
{
	for (int i = topStack; i >= 0; i--)
	{
		printf("[Stack:%d] = %d\n",i, ptrStack[i] );
	}
    
}

int* createStack(int *ptrStack, int size)
{
	if(ptrStack != NULL)
	{
		printf("Stack is already created ...!!!\n");
	}
	else
	{
		ptrStack = (int*)malloc( size*sizeof(int) );
		if(ptrStack == NULL)
		{
			printf("[Error]: Creating stack\n");
		}
		else
		{
			printf("Stack created successfully with size : %d\n",size );
		}
	}
	return ptrStack;
    
}

void deleteStack(int *ptrStack)
{
	if(ptrStack)
	{
		free(ptrStack);
		printf("Stack deleted successfully\n");
	}
	
}

int main()
{
	int ch;
	int *ptrStack = NULL;
	int flag = 1;
	do
	{
		printf("---------------------------\n");
		printf("1. Create Stack\n");
		printf("2. Delete/Exit Stack\n");
		printf("3. Push Stack\n");
		printf("4. Pop Stack\n");
		printf("5. Show/View Stack\n");
		printf("Please enter your option:");
		scanf("%d",&ch);
		printf("---------------------------\n");
		switch(ch)
		{
			case 1:
                /*Creating stack*/
                printf("Enter Stack size:");
                scanf("%d",&size);
                ptrStack = createStack(ptrStack,size);
                break;
			case 2:
                /*Deleting stack elements*/
                deleteStack(ptrStack);
                flag = 0;
                break;
			case 3:
                /*Push element in the stack*/
                printf("Enter element into the stack :");
                int value;
                scanf("%d",&value);
                pushStack(ptrStack,value);
                break;
			case 4:
                /*Pop element from the stack*/
                popStack(ptrStack);
                break;
			case 5:
                /*Show/View Stack elements*/
                showStack(ptrStack);
                break;
			default:
                flag = 1;
                break;
                
		}
	}while(flag);
    
	return 0;
}
