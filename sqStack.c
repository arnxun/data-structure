#include <stdlib.h>
#include "sqStack.h"

SqStack * SqStackInit()
{
    SqStack *stack = NULL;
    stack = (SqStack *)malloc(sizeof(SqStack));
    stack->top=-1;
    return stack;
}

int SqStackIsEmpty(SqStack *stack)
{
    if (stack->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int SqStackPush(SqStack *stack, int data)
{
    if (stack->top==MaxSize-1)
    {
        return 0;
    }
    stack->data[++stack->top] = data;
    return 1;
}

int SqlStackPop(SqStack *stack, int *data)
{
    if (SqStackIsEmpty(stack))
    {
        return 0;
    }
    *data = stack->data[stack->top--];
}

