#include <stdio.h>
#include "stack.h"

int main(){
    // puts("xxx");
    // return 0;
    Stack *stack = NULL;
    stack = StackInit();
    for(int i = 0; i<5; i++)
    {
        StackPush(stack, i);
    }

    for(int i = 0; i<5; i++)
    {
        int data = 0;
        StackPop(stack, &data);
        printf("%d", data);
    }
    printf("\n");
    printf("zxzxzxzx");
    return 0;
}