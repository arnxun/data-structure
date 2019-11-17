#ifndef SQSTACK_H
#define SQSTACK_H

#define MaxSize 50

typedef struct{
    int data[MaxSize];
    int top;
} SqStack;

SqStack * SqStackInit(void);

int SqStackPush(SqStack *stack, int data);

int SqStackPop(SqStack *stack, int *data);

int SqStackIsEmpty(SqStack *stack);

// int SqStackIsFull(SqStack *stack);

#endif