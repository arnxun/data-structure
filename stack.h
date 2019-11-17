#ifndef STACK_H
#define STACK_H
#include "list.h"

typedef struct Stack{
    struct List *head;
    int size;
} Stack;

//初始化栈
Stack * StackInit(void);

//进栈
int StackPush(Stack *stack, int data);

//出栈
int StackPop(Stack *stack, int *data);

//判断栈空
int StackIsEmpty(Stack *stack);

//判断栈满
// int StackIsFull(Stack *stack);

#endif