#include <stdlib.h>
#include "stack.h"
#include "list.h"

Stack * StackInit()
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->head = (List *)malloc(sizeof(List));
    stack->head->next = NULL;
    stack->size = 0;
    return stack;
}

int StackIsEmpty(Stack *stack)
{
    if (stack->head->next == NULL){
        return 1;
    }
    else
    {
        return 0;
    }
}

int StackPush(Stack *stack, int data)
{
    List *temp = (List *)malloc(sizeof(List));
    temp->data = data;
    temp->next = stack->head->next;
    stack->head->next = temp;
    stack->size++;
    return 1;
}

int StackPop(Stack *stack, int *data)
{
    if (StackIsEmpty(stack)){
        return 0;
    }
    // List *temp = NULL;
    List *temp = stack->head->next;
    *data = temp->data;
    stack->head->next = temp->next;
    stack->size--;
    free(temp);
    return 1;
}

